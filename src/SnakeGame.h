#ifndef SNAKEGAME_H
#define SNAKEGAME_H

#include <iostream>
#include <vector>

/**
 * Snake game logic (movement, score, collisions).
 */
class SnakeGame {
private:
    int score;
    bool gameOver;

public:
    SnakeGame();

    void startGame();
    void update();
    void display() const;
    bool isGameOver() const;
    int getScore() const;
};

#endif