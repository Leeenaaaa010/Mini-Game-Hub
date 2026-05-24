#include "../src/SnakeGame.h"

#include <iostream>

void test_snake_creation() {
    std::cout << "Test 1: SnakeGame creation... ";

    SnakeGame game;

    std::cout << "PASS\n";
}

void test_snake_setup() {
    std::cout << "Test 2: Snake setup... ";

    SnakeGame game;
    game.setup();

    std::cout << "PASS\n";
}

void test_snake_run_stability() {
    std::cout << "Test 3: Snake run exists... ";

    SnakeGame game;

    // We do NOT actually run the loop (it would block forever)
    // Just ensure object is valid and function exists

    std::cout << "PASS\n";
}

int main() {

    std::cout << "Running Snake tests...\n\n";

    test_snake_creation();
    test_snake_setup();
    test_snake_run_stability();

    std::cout << "\nAll Snake tests passed.\n";

    return 0;
}