#include <iostream>
#include "GameMenu.h"

int main() {
    GameMenu menu;

    menu.displayMenu();
    int choice = menu.getChoice();

    std::cout << "You selected: " << choice << std::endl;

    return 0;
}