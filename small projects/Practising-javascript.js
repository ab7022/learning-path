function greet(greetingPrefix,userName = "User") {
    // console.log(greetingPrefix+" " + userName+"!")
    console.log(`${greetingPrefix} ${userName}!`)
}
greet("Hi","Abdul")
greet("hey")

function sumNum(num1,num2,num3) {
    return num1 + num2 + num3
}
console.log(sumNum(2,2,2))

function sumNum(num1,num2,num3=0) {
    return num1 + num2 + num3
}
console.log(sumNum(2,2,2))

function sum(numbers) {
    let result = 0
    for (const number of numbers) {
        result += number
    }
    return result
}
console.log(sum([1,5,9,45,8]))

function sum(...numbers) {
    let result = 0
    for (const number of numbers) {
        result += number
    }
    return result
}
console.log(sum(1,5,9,45,8))

function sum(...numbers) {
    let result = 0
    for (const number of numbers) {
        result += number
    }
    return result
}
const inputNum= [1,4,7,5,9,3]
console.log(sum(...inputNum))
//
console.log(sum)

const hobbies = ["cricket","chess"]
console.log(hobbies)
hobbies.push("football")
console.log(hobbies)

 const person = {
    age:49
 }
 function calculateAge(p) {
     p.age -= 18
    return p.age 
    // return p.age - 18
 }
//  console.log(calculateAge({age:person.age}))
console.log(calculateAge({...person}))

 console.log(calculateAge(person))
 console.log(person) 

const fs = require("fs")
function filePath() {
   try{
      const fileData = fs.readFileSync("fileData")
   }
   catch{
      console.log("File Not Found")
   }
}
filePath()

class job {
   constructor(jobTitle,city,salary){
      this.title = jobTitle
      this.city = city
      this.salary = salary
   }
   describe(){
      console.log(`I'm a ${this.title} i work in ${this.city} and i earn ${this.salary}`)
   }
}
const developer = new job("Engineer","New York",50000)
const cook = new job("cook","Bengaluru",35000)
// console.log(developer)
developer.describe()
cook.describe()

const input = ["Abdul","Bayees"]
const firstName = input[0]
const lastName = input[1]
const [first,last] = input
const{last:fullName} = input
// console.log(first,fullName)
console.log(first,last)

const fs = require("fs")
function readFile() {
         fs.readFile("data.txt",function(error,fileData){
    if(error){
     
    }
        console.log("file parsing done")
        console.log(fileData.toString())
    })
    console.log("Hi There")
}
readFile()

const { error } = require("console")
const fs = require("fs/promises")
function readFile() {
         fs.readFile("data.txt")
         .then(function(fileData){
        console.log("file parsing done")
        console.log(fileData.toString())
        // return dummyData
    })
    .then(function(){

    })
    .catch(error){
        console.log(error)
    }
    console.log("Hi There")
}
readFile()

let fileData
const fs = require("fs/promises")
 function readFile() {
      fs.readFile("data.txt")
         .then(function(fileData){
        console.log("file parsing done")
        console.log(fileData.toString())
        // return dummyData
    })
    .then(function(){

    })
    .catch(error){
        console.log(error)
    }
    console.log("Hi There")
}
readFile()

let fileData
const fs = require("fs/promises")
async function readFile() {
        
    console.log("Hi There")
}
readFile()

let fileData
const fs = require("fs/promises")
async function readFile() {
    try{
      console.log("file parsing done")

    }
    catch (error) {
    console.log("You Got Error")
    }
}
readFile()