import React from "react";
import ReactDOM from "react-dom";
import App from "./components/App";

ReactDOM.render(<App />, document.getElementById("root"));

var numbers = [3, 56, 2, 48, 5];

const newNumber = numbers.map((x) => x * x);

////Map -Create a new array by doing something with each item in an array.
const newNumbers = numbers.map((x) => x * 2);

//////Filter - Create a new array by keeping the items that return true.
const newNums = numbers.filter((num) => num < 10);

//Reduce - Accumulate a value by doing something to each item in an array.
var newNum = numbers.reduce(
  (accumulator, currentNumber) => accumulator + currentNumber
);

////Find - find the first item that matches from an array.
const newNo = numbers.find((num) => num > 10);

////FindIndex - find the index of the first item that matches.
const newNos = numbers.findIndex((num) => num > 10);
