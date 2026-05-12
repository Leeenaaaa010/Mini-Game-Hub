#include "../src/GameMenu.h"
#include <cassert>
#include <iostream>

void test_creation() {
    std::cout << "Test 1: creation... ";
    GameMenu m;
    std::cout << "PASS\n";
}

void test_display() {
    std::cout << "Test 2: display... ";
    GameMenu m;
    m.displayMenu();
    std::cout << "PASS\n";
}

void test_input() {
    std::cout << "Test 3: input... ";
    GameMenu m;
    int c = m.getChoice();
    assert(c >= 1 && c <= 3);
    std::cout << "PASS\n";
}

int main() {
    std::cout << "Running tests...\n";

    test_creation();
    test_display();
    test_input();

    std::cout << "All tests passed.\n";
}