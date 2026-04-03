let score = JSON.parse(localStorage.getItem('score')) || {
    wins: 0,
    losses: 0,
    ties: 0
};

updateScoreElement();

function playGame(playerMove) {
    const computerMove = getComputerMove();

    let result = '';

    if (playerMove === computerMove) {
        result = "It's a Tie!";
        score.ties += 1;  
    } else if (
        (playerMove === 'rock' && computerMove === 'scissors') ||
        (playerMove === 'paper' && computerMove === 'rock') ||
        (playerMove === 'scissors' && computerMove === 'paper')
    ) {
        result = 'You win!';
        score.wins += 1;  
    } else {
        result = 'You lose!';
        score.losses += 1;  
    }

    localStorage.setItem('score', JSON.stringify(score));

    updateScoreElement();

    document.querySelector('.js-result').innerHTML = result;
    document.querySelector('.js-moves').innerHTML = `
        You
        <img src="images/${playerMove}-emoji.png" class="move-item">  
        <img src="images/${computerMove}-emoji.png" class="move-item">
        Computer `;
}

function getComputerMove() {
    const randomNumber = Math.random();

    if (randomNumber < 1 / 3) {
        return 'rock';
    } else if (randomNumber < 2 / 3) {
        return 'paper';
    } else {
        return 'scissors';
    }
}

function updateScoreElement() {
    document.querySelector('.js-score').innerHTML = 
        `Win: ${score.wins}, Losses: ${score.losses}, Ties: ${score.ties}`;
}

function resetScore() {
    score = {
        wins: 0,
        losses: 0,
        ties: 0
    };
    localStorage.removeItem('score');  
    updateScoreElement();
}