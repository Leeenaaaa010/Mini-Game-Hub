#include "SnakeGame.h"
#include <cstdlib>
#include <unistd.h>
#include <termios.h>
#include <fcntl.h>

// Detect keyboard press
int kbhit() {
    termios oldt, newt;
    int ch;
    int oldf;

    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;

    newt.c_lflag &= ~(ICANON | ECHO);

    tcsetattr(STDIN_FILENO, TCSANOW, &newt);

    oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);

    ch = getchar();

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    fcntl(STDIN_FILENO, F_SETFL, oldf);

    if (ch != EOF) {
        ungetc(ch, stdin);
        return 1;
    }

    return 0;
}

// Get pressed key
char getch() {
    char buf = 0;
    termios old = {};

    tcgetattr(STDIN_FILENO, &old);

    old.c_lflag &= ~ICANON;
    old.c_lflag &= ~ECHO;

    tcsetattr(STDIN_FILENO, TCSANOW, &old);

    read(STDIN_FILENO, &buf, 1);

    old.c_lflag |= ICANON;
    old.c_lflag |= ECHO;

    tcsetattr(STDIN_FILENO, TCSADRAIN, &old);

    return buf;
}

// Constructor
SnakeGame::SnakeGame() {
    setup();
}

// Setup game
void SnakeGame::setup() {
    gameOver = false;
    dir = STOP;

    headX = width / 2;
    headY = height / 2;

    score = 0;
    tail.clear();

    spawnFood();
}

// Spawn food (safe version)
void SnakeGame::spawnFood() {
    foodX = rand() % width;
    foodY = rand() % height;
}

// Draw game board
void SnakeGame::draw() {
    system("clear");

    for (int i = 0; i < width + 2; i++)
        std::cout << "#";
    std::cout << std::endl;

    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {

            if (x == 0)
                std::cout << "#";

            if (x == headX && y == headY) {
                std::cout << "O";
            }
            else if (x == foodX && y == foodY) {
                std::cout << "F";
            }
            else {
                bool printTail = false;

                for (int i = 0; i < tail.size(); i++) {
                    if (tail[i].first == x &&
                        tail[i].second == y) {
                        std::cout << "o";
                        printTail = true;
                    }
                }

                if (!printTail)
                    std::cout << " ";
            }

            if (x == width - 1)
                std::cout << "#";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < width + 2; i++)
        std::cout << "#";

    std::cout << std::endl;

    std::cout << "Score: " << score << std::endl;
    std::cout << "Controls: W A S D" << std::endl;
    std::cout << "Press X to quit" << std::endl;
}

// Handle input
void SnakeGame::input() {
    if (kbhit()) {
        switch (getch()) {
        case 'a': dir = LEFT; break;
        case 'd': dir = RIGHT; break;
        case 'w': dir = UP; break;
        case 's': dir = DOWN; break;
        case 'x': gameOver = true; break;
        }
    }
}

// Game logic
void SnakeGame::logic() {

    std::vector<std::pair<int, int>> previousTail = tail;

    if (!tail.empty()) {
        tail[0] = {headX, headY};

        for (int i = 1; i < tail.size(); i++) {
            tail[i] = previousTail[i - 1];
        }
    }

    switch (dir) {
    case LEFT:  headX--; break;
    case RIGHT: headX++; break;
    case UP:    headY--; break;
    case DOWN:  headY++; break;
    default: break;
    }

    // Wall collision
    if (headX < 0 || headX >= width ||
        headY < 0 || headY >= height) {
        gameOver = true;
    }

    // Self collision
    for (int i = 0; i < tail.size(); i++) {
        if (tail[i].first == headX &&
            tail[i].second == headY) {
            gameOver = true;
        }
    }

    // Food collision
    if (headX == foodX && headY == foodY) {
        score += 10;
        spawnFood();
        tail.push_back({0, 0});
    }
}

// Main loop
void SnakeGame::run() {
    while (!gameOver) {
        draw();
        input();
        logic();
        usleep(100000);
    }

    std::cout << "\nGame Over!\n";
    std::cout << "Final Score: " << score << std::endl;
}