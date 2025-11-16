import React from "react";
import Register from "./Register";
import Login from "./Login";
import Form from "./Form";

var userIsRegistered = false;

// function App() {
//   return (
//     <div className="container">
//       {userIsRegistered ? <Login /> : <Register />}
//     </div>
//   );
// }

function App() {
  return (
    <div className="container">
      {userIsRegistered ? (
        <Form IsRegistered="true" />
      ) : (
        <Form IsRegistered="false" />
      )}
    </div>
  );
}

export default App;
