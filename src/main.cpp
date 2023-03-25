/*
    Writen by: Oscar Bergström
    https://github.com/OSCARJFB
*/

#include <iostream>
#include <memory>
#include "board.h"
#include "tetrimino.h"

int main(void)
{
    board newBoard; 
    tetrimino newTetrimino(1); 
    newBoard.updateBoard(newTetrimino.tetriminoPiece); 
    newBoard.printBoard(); 

    return 0; 
}