import React from "react";
import ReactDOM from "react-dom";

const fname = "John";
const lname = "Holmes";
const number = 8;

// Specify JavaScript inside html
ReactDOM.render(
  <div>
    <h1>Hello {fname + " " + lname}!</h1>
    <p>Your lucky numer is {4 * 2}</p>
  </div>,
  document.getElementById("root")
);
