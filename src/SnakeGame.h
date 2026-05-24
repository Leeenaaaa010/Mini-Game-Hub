#ifndef SNAKEGAME_H
#define SNAKEGAME_H

#include <iostream>
#include <vector>
#include <utility>

class SnakeGame {
private:
    bool gameOver;

    const int width = 20;
    const int height = 20;

    int headX;
    int headY;

    int foodX;
    int foodY;

    int score;

    enum Direction {
        STOP = 0,
        LEFT,
        RIGHT,
        UP,
        DOWN
    };

    Direction dir;

    std::vector<std::pair<int, int>> tail;

    void spawnFood();

public:
    SnakeGame();

    void setup();
    void draw();
    void input();
    void logic();
    void run();
};

#endif