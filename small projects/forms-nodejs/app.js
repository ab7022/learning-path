const fs = require("fs");
const path = require("path");
const express = require("express");
const app = express();
const filePath = path.join(__dirname, "data", "signups.json");

app.set("views", path.join(__dirname, "views"));
app.set("view engine", "ejs");
app.use(express.static("public"));
app.use(express.urlencoded({ extended: false }));

app.get("/form", function (req, res) {
  // Handle GET request for /form
  res.render("index"); // Render the form view
});
app.post("/form", function (req, res) {
  const signUps = req.body;
  let storedData = [];
  const fileData = fs.readFileSync(filePath);
  storedData = JSON.parse(fileData);
  storedData.push(signUps);
  fs.writeFileSync(filePath, JSON.stringify(storedData));
  res.redirect("/confirmation"); // Redirect to the confirmation page
});

app.get("/confirmation", function (req, res) {
  res.render("confirmation");
});
app.get("/data", function (req, res) {
  res.render("data");
});
app.get("/users", function (req, res) {
  const filePath = path.join(__dirname, "data", "signups.json");
  const fileData = fs.readFileSync(filePath);
  const storedData = JSON.parse(fileData);
  res.render("data", { signups: storedData });
});
app.listen(3000);
