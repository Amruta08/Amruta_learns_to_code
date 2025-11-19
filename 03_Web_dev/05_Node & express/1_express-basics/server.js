const express = require("express");

// create a function that reprents the express module
const app = express();

// method that specifies what should happen when a
// browser gets in touch with our server & makes a get request

// 1st parameter - location of get request/ route that the response will go
// 2nd parameter - callback function which has 2 parameters (request, response)
// req, res
app.get("/", function (request, response) {
  // console.log(request);

  // send response
  response.send("<h1>hello</h1>");
});

// add contact page
app.get("/contact", function (req, res) {
  res.send("Contact me from email");
});

// add about page
app.get("/about", function (req, res) {
  res.send("<h1>This page is created by anonmyous function ;))</h1>");
});

// listen at a specific port for any http request
// callback function
app.listen(3000, function () {
  console.log("Server started on port 3000");
});
