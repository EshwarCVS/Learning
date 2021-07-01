let count = 0
let countElement = document.getElementById("count-el")
let saveElement = document.getElementById("save-el")

function increment(){
    count = count + 1;
    countElement.innerText = count
}

function save(){
    let counter = count + " -"
    saveElement.textContent += counter
    countElement.textContent = 0
    count = 0
}