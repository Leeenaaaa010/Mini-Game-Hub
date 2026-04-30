# Implementation Plan - Mini Game Hub

## Feature 1: Main Menu System
**Trigger**: Program starts

Displays the main menu to the user with options to play TicTacToe, play Snake, or exit the program. Continuously loops until the user chooses to quit. Handles user input and sends the selection to the GameManager.

---

## Feature 2: Play TicTacToe
**Trigger**: User selects "Play TicTacToe" from the main menu

Starts a TicTacToe game session. Initializes the game board, alternates player turns, and checks for win or draw conditions after each move. Ends when a player wins or the game is a draw, then returns to the main menu.

---

## Feature 3: Play Snake Game
**Trigger**: User selects "Play Snake" from the main menu

Launches the Snake game. Tracks snake movement, score, and collision detection. The game ends when the snake collides with a wall or itself, then returns the final score to the user and goes back to the main menu.

---

## Feature 4: Game Manager Control
**Trigger**: Program starts and runs continuously

The GameManager class controls the entire program flow. It receives user choices from the menu and launches the correct game. It ensures smooth switching between games and manages the overall structure of the program.

---

## Feature 5: Exit Program
**Trigger**: User selects "Exit" from main menu

Stops the program loop and safely exits the application. Ensures all game sessions are ended properly before closing the program.