var houseKeeper = {
    name :"osdrsg",
age: 24,
work : true,
}

var bellboy = {
    name: "Timothy",
    age: 19,
    hasWorkPermit: true,
    languages: ["french", "English"],
    moveSuitcase: function () {
        alert("May I take your suitcase ?");
    }
}

// homeKeeper{name: "osdrsg", age: 76, work: true}

function Bellboyfactory (name, age, workpermit, languages){
this.name = name;
this.age = age;
this.workpermit = workpermit;
this.languages = languages ;
}

// create object from  Bellboyfactory class
var BELLBOY1 = new Bellboyfactory("TIM",19,true,["eng", "french"]);

// BELLBOY1
// BELLBOY {name: "TIM", age: 19, workpermit: true, languages: Array(1)}