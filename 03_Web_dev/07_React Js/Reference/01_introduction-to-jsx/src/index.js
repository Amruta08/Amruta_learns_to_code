// import react and react-dom
import React from "react";
import ReactDOM from "react-dom";

// render(what to show, where to show), optional callback to tell when render function completed)
ReactDOM.render(
  <div>
    <h1>Hello world</h1>
    <p>Paragraph</p>
  </div>,
  document.getElementById("root")
);
