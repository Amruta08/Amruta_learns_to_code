import React from "react";
import ReactDOM from "react-dom";
import pi from "./math.js";

ReactDOM.render(
  <ul>
    <li>{pi}</li>
    <li>2</li>
    <li>3</li>
  </ul>,
  document.getElementById("root")
);
