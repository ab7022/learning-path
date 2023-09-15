const express = require("express");
const path = require("path");
const app = express();

const resData = require("./util/restaurant-data");
const defaultRoutes = require("./routes/defaultRoutes");
const restaurantRoutes = require("./routes/restaurants");

// Get the restaurants array from the resData module
const restaurants = resData.getStoredRestaurant();

app.set("views", path.join(__dirname, "views"));
app.set("view engine", "ejs");

app.use("/", defaultRoutes);
app.use("/", restaurantRoutes(resData, restaurants)); // Pass the resData module and restaurants array

app.use(express.static(path.join(__dirname, "public")));
app.use(express.urlencoded({ extended: false }));

app.use(function (req, res) {
  res.status(404).render("404");
});

app.use(function (error, req, res, next) {
  res.status(500).render("500");
});

app.listen(3000, () => {
  console.log("Server running on http://localhost:3000");
});
