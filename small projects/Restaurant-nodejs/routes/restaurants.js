const express = require("express");
const router = express.Router();

const uuid = require("uuid");
const { storeRestaurants } = require("../util/restaurant-data");

module.exports = (resData, restaurants) => {
  // Pass the resData module and restaurants array as parameters

  router.get("/share", function (req, res) {
    res.render("share");
  });


  router.post("/share", function (req, res) {
    const restaurant = req.body;
    restaurant.id = uuid.v4();
    restaurants.push(restaurant);
    resData.storeRestaurants(restaurants);
    res.redirect("/confirm");
  });

  router.get("/browse", function (req, res) {
  //  storedRestaurants = resData.getstoredrestaurants()
  let order = req.query.order
  let nextOrder ="desc"
  if (order!=="asc"&& order!=="desc") {
    order="asc"
  }
  if (order==="desc") {
    nextOrder="asc"
  }
  restaurants.sort(function (resA, resB) {

     if(order==="asc"&& resA.restaurantName>resB.restaurantName || order==="desc"&& resB.restaurantName>resA.restaurantName ){
      return 1
     }
     return -1
    });

    res.render("browse", {
      numberOfRestaurants: restaurants.length,
      restaurants: restaurants,
      nextOrder:nextOrder
    });
  });

  router.get("/restaurant-detail", function (req, res) {
    const restaurantId = req.query.id;
    for (const restaurant of restaurants) {
      if (restaurant.id === restaurantId) {
        return res.render("restaurant-detail", { restaurant: restaurant });
      }
    }
    res.status(404).render("404");
  });

  router.get("/confirm", function (req, res) {
    res.render("confirm");
  });

  router.get("/500", function (req, res) {
    res.render("500");
  });

  return router;
};
