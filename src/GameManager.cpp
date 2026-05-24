#include "GameManager.h"
#include "TicTacToe.h"
#include "SnakeGame.h"
#include <iostream>

GameManager::GameManager() {
    // GameManager acts as a central controller for launching games
}

void GameManager::playTicTacToe() {
    TicTacToe game;
    game.play();
}

void GameManager::playSnake() {
    SnakeGame game;
    game.run();
}