#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include <vector>
#include <string>
#include "TicTacToe.h"
#include "SnakeGame.h"
#include "GameMenu.h"

/**
 * GameManager controls the overall Mini Game Hub.
 * It manages the menu and coordinates which game is played.
 */
class GameManager {
private:
    GameMenu menu;
    TicTacToe tictactoe;
    SnakeGame snake;

    int currentChoice;

public:
    // Constructor
    GameManager();

    // Main program control
    void run();              // starts the program
    void handleChoice();     // processes user selection

    // Game launching
    void playTicTacToe();
    void playSnake();

    // Utility
    void exitGame();
};

#endif