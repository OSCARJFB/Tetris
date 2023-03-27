/*
    Writen by: Oscar Bergström
    https://github.com/OSCARJFB
*/

#include <iostream>
#include <termio.h>
#include "board.h"

#define ESC 27

void runGame(void)
{
    board newBoard;
    bool isRunning = true;
    while (isRunning)
    {
        tetrimino newTetrimino(1);
        newBoard.updateBoard(newTetrimino.tetriminoPiece);
        newBoard.printBoard();
    }
}