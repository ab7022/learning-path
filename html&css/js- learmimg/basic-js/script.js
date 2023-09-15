let content  = document.querySelector("p")
// console.dir(content)
content.textContent = "this is javascript generated text"

let link = document.querySelector("a")
link.href = "https:google.com"

let neww = document.createElement("p")
neww.textContent = " this is paragraph from javascript"
content  = document.querySelector("p")
content.append(neww)


let btn = document.querySelector("h3")
function btnClick(params) {
    btn.textContent = "Clicked"
    
}
btn.addEventListener("click" , btnClick)

// let details = document.querySelector("input")
// function retrieve(){
//     let text = details.value
//     console.log(text)
//     let show = document.querySelector("h2")
//     show.textContent =(text)
// }
// details.addEventListener("input" , retrieve)
// let details = document.querySelector("input")
// function retrieve(event){
//     let text = event.data
//     console.log(text)
// }
// details.addEventListener("input" , retrieve)
let details = document.querySelector("input")
function retrieve(event){
    let text = event.target.value
    console.log(text)
}
details.addEventListener("input" , retrieve)


 let deletion = document.getElementById("deletion")
 let deleteBtn = document.getElementById("delete-btn")
function deleteContent(){
    // deletion.textContent = "Thanks! it has been deleted"
    deletion.remove()
    
}
deleteBtn.addEventListener("click" , deleteContent) 

let changebtn = document.getElementById("change-btn")
let background = document.getElementById("deletion")
function changeColor(){
    background.style.backgroundColor="black"
    background.style.color = "white"
}
changebtn.addEventListener("click",changeColor)

let bring = document.getElementById("bring")
background = document.getElementById("deletion")
function bringback(){
    background.style.backgroundColor="white"
    background.style.color = "black"
}
bring.addEventListener("click",bringback)

const change = document.querySelectorAll("button");
const changeStyle = document.getElementById("change-style");

function changeBtnColor(event) {
  change.forEach(button => {
    button.classList.add("buttonn");
  });
}

changeStyle.addEventListener("click", changeBtnColor);
