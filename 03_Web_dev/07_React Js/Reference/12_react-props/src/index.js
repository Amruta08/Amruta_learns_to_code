import React from "react";
import ReactDOM from "react-dom";

function Card(props) {
  console.log(props); // Returns JS object of attributes passed while using the component
  return (
    <div>
      <h2>{props.name}</h2>
      <img src={props.src} alt={props.alt} />
      <p>{props.phone}</p>
      <p>{props.email}</p>
    </div>
  );
}

ReactDOM.render(
  <div>
    <h1>My Contacts</h1>
    <Card
      name="Beyonce"
      src="https://blackhistorywall.files.wordpress.com/2010/02/picture-device-independent-bitmap-119.jpg"
      phone="+123 456 789"
      email="b@beyonce.com"
      alt="avatar_img"
    />
    <Card
      name="Jack Bauer"
      src="https://pbs.twimg.com/profile_images/625247595825246208/X3XLea04_400x400.jpg"
      phone="+987 654 321"
      email="jack@nowhere.com"
      alt="avatar_img"
    />
    <Card
      name="Chuck Norris"
      src="https://i.pinimg.com/originals/e3/94/47/e39447de921955826b1e498ccf9a39af.png"
      phone="+918 372 574"
      email="gmail@chucknorris.com"
      alt="avatar_img"
    />
  </div>,
  document.getElementById("root")
);
