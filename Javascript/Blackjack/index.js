let cards
let sum
let hasBlackjack = false
let isInGame = true

let player = {
    name: "EsChViSa",
    chips: "250"
}

let message = document.getElementById("messageElement")
let sumElement = document.getElementById("sumElement")
let cardsElement = document.getElementById("cardsElement")
let playerElement = document.getElementById("playerElement")

function generateRandomCard(){
    let number = (Math.floor(Math.random() * 13)) + 1
    if(number > 10){
        return 10
    }
    else if(number === 1){
        return 11
    }
    else{
        return number
    }
}

function startGame(){
    cards = []
    sum = 0
    let firstCard = generateRandomCard()
    let secondCard = generateRandomCard()
    cards.push(firstCard)
    cards.push(secondCard)
    sum = firstCard + secondCard
    renderGame()
}

console.log(cards)

function renderGame(){
    cardsElement.textContent = "Cards: "
    for(i = 0; i < cards.length; i++){
        cardsElement.textContent += cards[i] + " "
    }
    sumElement.textContent = "Sum: " + sum
    if(sum <= 20){
        message.textContent = "Want another card?"
    }
    else if(sum === 21){
        message.textContent = "Congo BLACKJACK!"
        hasBlackjack = true
        cards = []
        sum = 0 
        player.chips += 10
    }
    else{
        message.textContent = "Out of the game!!"
        isInGame = false
        cards = []
        sum = 0
        player.chips -= 10
    }
    playerElement.textContent = player.name + ": $" + player.chips
}

function newGame(){
    let card = generateRandomCard()
    cards.push(card)
    sum += card
    renderGame()
}