/*
    Writen by: Oscar Bergström
    https://github.com/OSCARJFB
*/
#pragma once
#include "tetrimino.h"

class board
{
private:
    static constexpr int board_height = 20;
    static constexpr int board_width = 20;

    enum border
    {
        Top = 0,
        Bottom = board_height - 1,
        Left = 0,
        Right = board_width - 2,
        newline = board_width - 1,
    };

public:
    char gameBoard[board_height][board_width];

    board();
    void printBoard(void);
    void updateBoard(char tetriminoPiece[4][2]); 
};
