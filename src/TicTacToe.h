#ifndef TICTACTOE_H
#define TICTACTOE_H

#include <tuple>
using namespace std;

class TicTacToe {
private:
    bool gameOver;
    char board[3][3];
    char player;

public:
    TicTacToe();

    void init();
    void draw_board();
    bool check_tie();
    bool check_winner(int row, int col, char player);
    tuple<int, int> input();
    void play();
};

#endif