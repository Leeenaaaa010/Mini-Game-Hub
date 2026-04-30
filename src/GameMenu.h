#ifndef GAMEMENU_H
#define GAMEMENU_H

#include <iostream>

/**
 * GameMenu handles the main menu of the Mini Game Hub.
 * It lets the user choose which game to play.
 */
class GameMenu {
private:
    int choice;

public:
    GameMenu();

    void displayMenu() const;
    int getChoice() const;
    void setChoice(int c);
};

#endif