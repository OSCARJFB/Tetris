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
    newBoard.printBoard(); 
    
    std::unique_ptr<tetrimino> ST(new tetrimino(1));
    std::unique_ptr<tetrimino> SQ(new tetrimino(2));
    std::unique_ptr<tetrimino> T(new tetrimino(3));
    std::unique_ptr<tetrimino> SK(new tetrimino(4));

    return 0; 
}