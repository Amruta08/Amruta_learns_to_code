function fetchRandomImage() {
  // Create object from XMLHttpRequest() to make a request
  var xhrRequest = new XMLHttpRequest();

  // Specify the handler
  xhrRequest.onload = function () {
    // log the response received json in console
    console.log(xhrRequest.response);

    // Use parse covert the string into JSON object
    var responseJSON = JSON.parse(xhrRequest.response);

    // extract the message attribute from JSON
    var imageURL = responseJSON.message;

    // change src attribute of img
    document.querySelector(".dogImage").setAttribute("src", imageURL);
  };

  // error handling
  xhrRequest.onerror = function () {
    console.log("Request Failed");
  };

  // Intitialize the request call
  //open('method', 'API link', 'boolean for async or sync')
  xhrRequest.open("get", "https://dog.ceo/api/breeds/image/random", true);

  // Make the request to the server
  xhrRequest.send();
}

document.querySelector(".fetchButton").onclick = fetchRandomImage;
