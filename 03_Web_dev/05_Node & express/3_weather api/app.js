// require express module
const express = require("express");
const http = require("http");

const app = express();

app.get("/", function (req, res) {
  const url =
    "https://api.openweathermap.org/data/2.5/weather?q=London,uk&units=metric&APPID=3af3c3b3463cf3946f841251399e0b6c#";
  
    // make a http get request
    http.get(url, function (response) {
    console.log(response.statusCode);

    // get hold of data recevied from api
    response.on("data", function (data) {
      // console.log(data);
      // Convert json string to JS object
      const weatherData = JSON.parse(data);
      // console.log(weatherData);

      // Access temperature from api's json  
      const temp = weatherData.main.temp
      //const temp = weatherData.main.feels_like
      
      // Access Weather description from api's json
      const weatherDescription = weatherData.weather[0].description;
      console.log(temp);

      var info = <h1>The Temperature in London</h1>

      // Display the Temperature
      res.write("The temperature in london is " + temp)

      // Display the Description
      res.write("The weather is currently " + weatherDescription)

      res.send()
    });
  });
});

app.listen(3000, () => {
  console.log("Server started on port 3000");
});
