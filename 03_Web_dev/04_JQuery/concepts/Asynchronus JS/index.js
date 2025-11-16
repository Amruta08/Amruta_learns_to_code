function fetchRandomImage() {
  // Method 1

  $.ajax({
    url: "https://dog.ceo/api/breeds/image/random",
    method: "get",
    // function will take argument data
    // means in response the data you are getting
    success: function (data) {
      // extract the message attribute from JSON
      var imageURL = data.message;
      // change src attribute of img
      $(".dogImage").attr("src", imageURL);
    },
  }).fail(function (xhr, textSatus, errorThrown) {
    console.log("Request Failed");
  });

  // Method 2

  //Handler can recieve 3 things :-
//   xhr - Jquery xhr object
//   textSatus - says error if there is a error
//   errorThrown

  // if you are making a GET request you can use the following
  $.get("https://dog.ceo/api/breeds/image/random", function (data) {
    // extract the message attribute from JSON
    var imageURL = data.message;
    // change src attribute of img
    $(".dogImage").attr("src", imageURL);
  }).fail(function (xhr, textSatus, errorThrown) {
    console.log("Request Failed");
  });
}

document.querySelector(".fetchButton").onclick = fetchRandomImage;
