const mongoose = require('mongoose');

// Specfies port of mongodb database & database name
mongoose.connect("mongodb://localhost:27017/fruitsDB");

// Create schema(blueprint) for database (here fruitsDB)
const fruitSchema = new mongoose.Schema({
  name: {
    type: String,
    required: true
  },

  rating: {
    type: Number,
    min: 1,
    max: 10
  },
  review: String
});

// Create schema for people 
const peopleSchema = new mongoose.Schema({
  name: String,
  age: Number,
  favouriteFruit: fruitSchema
})

 // Create mongoose model
 // specify collection name & schema followed by it
const Fruit = mongoose.model("Fruit", fruitSchema);
const People = mongoose.model("People", peopleSchema);


const apple = new Fruit ({
  name: "Apple",
  rating: 7,
  review: "Pretty tasty & Healthy, must have everyday!!!"
});

const kiwi = new Fruit({
  name: "kiwi",
  score: 10,
  review: "The best fruit!"
});

const person = new People({
  name: "Amy",
  age: 12,
  favouriteFruit: kiwi
});

// const orange = new Fruit({
//   name: "Orange",
//   score: 4,
//   review: "Too sour"
// });

// const banana = new Fruit({
//   name: "banana",
//   score: 3,
//   review: "Weird texture"
// });

// const person = new People({
//   name:"John",
//   age: 37
// });

const fruit = new Fruit ({
  name: "pear",
  rating: 8,
  review: "Pretty tasty & Healthy, must have everyday!!!"
});

// save fruit data in fruits collection in fruits db
fruit.save();
person.save();

// Insert many records in collections
// err func to display any error while inserting
Fruit.insertMany([kiwi, orange, banana], function(err){
  if (err) {
    console.log(err)
  } else {
    console.log("Succesfully saved all fruits to fruitsDB")
  }
});

// find fruits
Fruit.find(function(err, fruits) {
  if (err) {
    console.log(err)
  } else {
    // close connection
    // mongoose.connection.close()
    console.log(fruits) 
    fruits.forEach(fruit => {
      console.log(fruit.name)
    });
  }
})

// Update record
Fruit.updateOne({_id:"637d110dc9606c619709e5a0"}, {review:"Healthy"}, function(err){
  if(err){
    console.log(err);
  }else{
    console.log("Succesfully updated the document");
  }
})

People.updateOne({_id:"637dc40e81782716141d7e56"}, {favouriteFruit:apple}, function(err){
  if(err){
    console.log(err);
  }else{
    console.log("Succesfully updated the document");
  }
})

// Delete record
Fruit.deleteOne({name: 'pear'}, function(err) {
  if(err){
    console.log(err);
  }else{
    console.log("Succesfully deleted the record");
  }
})

People.deleteMany({name:"John"}, function(err) {
  if(err){
        console.log(err);
      }else{
        console.log("Succesfully deleted the records");
      }
})
