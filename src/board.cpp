#include <iostream>
#include "board.h"

board::board(void)
{
    for(int i = 0; i < height; ++i)
    {
        for(int j = 0; j < width; ++j)
        {
            gameBoard[i][j] = 'k'; 
        }
    }
}

void board::printBoard(void)
{
    for(int i = 0; i < height; ++i)
    {
        for(int j = 0; j < width; ++j)
        {
            std::cout << gameBoard[i][j]; 
        }
    }
}