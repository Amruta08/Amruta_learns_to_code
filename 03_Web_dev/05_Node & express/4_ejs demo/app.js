//jshint esversion:6
const express = require("express");
const bodyParser = require("body-parser");

const app = express();
app.set("view engine", "ejs");

const weekday = ["Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"];

app.get("/", function (req, res) {
  var today = new Date();
  var CurrentDay = today.getDay()
  var day = weekday[CurrentDay];
  // if (today.getDay() == 6 || today.getDay() == 0) {
  //   day = "Weekend";
  // } else {
  //   day = "Weekday";
  // }

  res.render("list", { kindOfDay: day });
});

app.listen(3000, function () {
  console.log("Server started on port 3000.");
});
