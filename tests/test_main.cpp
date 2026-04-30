#include <iostream>
#include <cassert>
#include "../src/GameMenu.h"
#include "../src/TicTacToe.h"
#include "../src/SnakeGame.h"

// TODO: Add tests for simple logic functions first

void test_menu_initialization() {
    GameMenu menu;

    // Example test (depends on implementation later)
    std::cout << "test_menu_initialization: TODO" << std::endl;
}

void test_tictactoe_initial_state() {
    TicTacToe game;

    // TODO: Check board is empty / reset correctly
    std::cout << "test_tictactoe_initial_state: TODO" << std::endl;
}

void test_snake_initial_state() {
    SnakeGame game;

    // TODO: Check score and gameOver state
    std::cout << "test_snake_initial_state: TODO" << std::endl;
}

int main() {
    std::cout << "Running tests..." << std::endl;

    test_menu_initialization();
    test_tictactoe_initial_state();
    test_snake_initial_state();

    std::cout << "\nAll tests completed." << std::endl;
    return 0;
}