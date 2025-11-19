// const { query } = require("express");
// const Joi = require('@hapi/joi');
//load  joi module
// arg- arbitary namespace for debugging
const debuger = require('debug')('app:startup')
const debug = require('debug')('app:db')
// const config =  require('config');
const helmet = require('helmet');
const morgan = require('morgan');
const Joi = require("joi");
const express = require("express");
// const { result } = require("@hapi/joi/lib/base");
const app = express();


// CONFIGURATION
// console.log(`Application name: ${config.get('name')}`)
// console.log(`Mail Server: ${config.get('mail.host')}`)
//console.log(`Mail Password: ${config.get('mail.password')}`)
// returns environment for node application
// returns undefined by default
// process.env.NODE_ENV
console.log(`NODE_ENV: ${process.env.NODE_ENV}`)

// app object also returns environment variable
app.get('env') // will return development by default
console.log(`app: ${app.get('env')}`)

//enable logging of http requests only on development environment
if (app.get('env') === 'development') {
  app.use(morgan('tiny'));
  debuger('morgan enabled...')
  // console.log('morgan enabled...')
}

debug("connected to database")

// enable parsing of json objects
app.use(express.json());

// arrays & complex objects can be passed
app.use(express.urlencoded({extended:true})); 

// Serves static files
app.use(express.static('folder_name'))

app.use(helmet());
// app.use(morgan('tiny'));

// CREATE CUSTOM MIDDLEWARE FUNCTION
app.use(function(req, res, next){
  console.log('Logginig..')
  next();
})

const courses = [
  { id: 1, name: "course1" },
  { id: 2, name: "course2" },
];

// SET view engine for our application
app.set('view engine', 'pug');
// set path for our templates
app.set('views', './views')

app.get("/", (req, res) => {
  res.render("index", {tittle: 'My Express App', message: 'Hello'});
});

// HOMEROUTE
// path or url
// callback function that will be called after having a get request
// app.get("/", (req, res) => {
//   res.send("hello world");
// });

// SHOW ALL COURSES
// returns array of courses

app.get("/api/courses", (req, res) => {
  res.send(courses);
});

// SHOW COURSE BY SPECIFIED ID
app.get("/api/courses/:id", (req, res) => {
  // check if course id exists in array
  const course = courses.find((c) => c.id === parseInt(req.params.id));

  // send message if course not found
  if (!course) return res.status(404).send("Not found");

  // send course if found
  res.send(course);
});

// app.get("/contact", function (req, res) {
//   res.send("Contact me from email");
// });

// // add a parameter :parameter_name
// app.get("/post/:year/:month", (req, res) => {
//   // show the year entered in url
//   res.send(req.params.year);

//   // shows request params json
//   res.send(req.params);

//   // Reading query string parameters
//   res.send(req.query);
// });

// ADD NEW COURSE
app.post("/api/courses", (req, res) => {
  // // define schema of object, it defines propeties of attributes
  // const schema = Joi.object({
  //   // name is string & should have min. 3 charactars and is required
  //   name: Joi.string().min(3).required(),
  // });

  // // vaidate the sent object
  // const Validation = schema.validate(req.body);

  // // check is there is any error in object body
  // if (Validation.error) {
  //   res.status(400).send(Validation.error);
  //   return;
  // }
  // read the course object that is in the body of request

  const { error } = validateCourse(req.body); // eqi to result.error
  if (error) return res.status(400).send(error.details[0].message);

  const course = {
    id: courses.length + 1,
    name: req.body.name,
  };

  // add new course object in array
  courses.push(course);
  // return object in the body of response
  res.send(course);
});

// UPDATE EXISTING COURSE
// Update a course
app.put("/api/courses/:id", (req, res) => {
  // look up the course & if not existing return 404
  const course = courses.find((c) => c.id === parseInt(req.params.id));
  if (!course) return res.status(404).send("Not found");

  // Validate, if invalid, return 400-bad request
  // const result = validateCourse(req.body);
  const { error } = validateCourse(req.body); // eqi to result.error
  if (error) return res.status(400).send(error.details[0].message);

  // Update course & return the updated course
  course.name = req.body.name;
  res.send(course);
});

function validateCourse(course) {
  const schema = Joi.object({
    name: Joi.string().min(3).required(),
  });
  return schema.validate(course);
}

// DELETE COURSE BY ID
app.delete("/api/courses/:id", (req, res) => {
  // Look up the course, if not found then return 404
  const course = courses.find((c) => c.id === parseInt(req.params.id));
  if (!course) return res.status(404).send("Not found");

  // Delete course - find index & use splice method to remove
  const index = courses.indexOf(course);
  courses.splice(index, 1);

  // Return the deleted course
  res.send(course);
});
// app.post();
// app.put();
// app.delete();

// app.listen(3000, () => {
//   console.log("Server started on port 3000");
// });

const port = process.env.PORT || 3000;
app.listen(port, () => {
  console.log(`Server started on port ${port}`);
});
