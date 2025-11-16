// var numbers = [3, 56, 2, 48, 5];

//Map -Create a new array by doing something with each item in an array.
// function square(x){
//   return x*x;
// }
// console.log(numbers.map(square))

// const SquareNo = numbers.map(function(n){
//   return n*n;
// })
// console.log(SquareNo)  //[9, 3136, 4, 2304, 25]

// const SquareNo = [];
// numbers.forEach(function (n) {
//   SquareNo.push(n * n);
// });
// console.log(SquareNo); //[9, 3136, 4, 2304, 25]

// //Filter - Create a new array by keeping the items that return true.
// // const EvenNo = numbers.filter(function(n){
// //   return (n%2 === 0)
// // })
// // console.log(EvenNo) //[56, 2, 48]

// const EvenNo = [];
// numbers.forEach(function (n) {
//   if (n % 2 === 0) {
//     EvenNo.push(n);
//   }
// });
// console.log(EvenNo); //[56, 2, 48]

// //Reduce - Accumulate a value by doing something to each item in an array.
// // var sum = 0;
// // numbers.forEach(function(n){
// //   sum += n;
// // })
// // console.log(sum) //114

// var total = numbers.reduce(function (sum, n) {
//   return sum + n;
// });
// console.log(total); //114

// //Find - find the first item that matches from an array.
// const num = numbers.find(function (n) {
//   return n > 10;
// });
// console.log(num); //56

// //FindIndex - find the index of the first item that matches.
// const index = numbers.findIndex(function (i) {
//   return i > 10;
// });
// console.log(index); //1

import emojipedia from "./emojipedia";

const Newarray = emojipedia.map(function (emojiItem) {
  return emojiItem.meaning.substring(0, 100);
});

console.log(Newarray);
