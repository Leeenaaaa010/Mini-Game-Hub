#ifndef TICTACTOE_H
#define TICTACTOE_H

#include <iostream>
#include <vector>

/**
 * TicTacToe game logic and board handling.
 */
class TicTacToe {
private:
    std::vector<std::vector<char>> board;
    char currentPlayer;

public:
    TicTacToe();

    void resetBoard();
    void printBoard() const;
    bool makeMove(int row, int col);
    bool checkWin() const;
    bool isDraw() const;
    void switchPlayer();
};

#endif