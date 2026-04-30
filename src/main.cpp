#include <iostream>
#include "GameManager.h"

using namespace std;

void displayMenu();

int main() {
    GameManager manager;

    // TODO: Initialize game system if needed

    int choice;
    bool running = true;

    while (running) {
        displayMenu();
        cin >> choice;

        if (choice == 1) {
            // TODO: Play TicTacToe
            manager.playTicTacToe();
        }
        else if (choice == 2) {
            // TODO: Play Snake game
            manager.playSnake();
        }
        else if (choice == 3) {
            // TODO: Show instructions or stats
            cout << "Feature coming soon..." << endl;
        }
        else if (choice == 4) {
            // Exit
            running = false;
        }
        else {
            cout << "Invalid choice. Try again." << endl;
        }
    }

    // TODO: Cleanup if needed before exit

    return 0;
}

void displayMenu() {
    cout << "\n=== Mini Game Hub ===" << endl;
    cout << "1. Play TicTacToe" << endl;
    cout << "2. Play Snake" << endl;
    cout << "3. Options (future feature)" << endl;
    cout << "4. Exit" << endl;
    cout << "Choice: ";
}