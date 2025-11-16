function clickes() {
    alert("i got clicked");
}
document.querySelector("button").addEventListener("click", clickes);


let elementsArray = document.querySelectorAll("button");
elementsArray.forEach(function(elem) {
    elem.addEventListener("click", function() {
        alert("i got clicked");
    });
});

// finding number of elements having same class
var numbuttons = document.querySelectorAll(".drum").length  ;

// for loop for adding  the event listeners to all elements having same class
for (var i = 0; i < numbuttons; i++) {
    document.querySelectorAll(".drum")[i].addEventListener("click" , function () {
        alert("i got clicked");
    } )
}

//adding event listeners to sound
for (var i = 0; i < numbuttons; i++) {
    document.querySelectorAll(".para")[i].addEventListener("click" , function (){
        var audio = new Audio("sounds/tom-1.mp3");
        audio.play();
    } )
}

//or adding all the elements in one div 
document.querySelector(".set").addEventListener("click", allBtns);

function allBtns() {
alert("I got clicked!");
}

