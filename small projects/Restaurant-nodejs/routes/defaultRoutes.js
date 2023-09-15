const express = require("express");
const router = express.Router()
router.get("/", function (req, res) {
    res.render("index");
  });
  router.get("/index", function (req, res) {
    //   const htmlFilePath = path.join(__dirname, "views", "index.html");
    //   res.sendFile(htmlFilePath);
    res.render("index");
  });
module.exports = router