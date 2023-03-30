/*
    Writen by: Oscar Bergström
    https://github.com/OSCARJFB
*/

#include <iostream>
#include "board.h"
#include "kbhit.h"

#define ESC 27

void runGame(void)
{
    board newBoard;
    kbhit keyHit;

    tetrimino newTetrimino(1);
    while (keyHit._kbhit() != ESC)
    {

        newBoard.updateBoard(newTetrimino.rotMode2);
        newBoard.printBoard();
        system("clear");
    }
}