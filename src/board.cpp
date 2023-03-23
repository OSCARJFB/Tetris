/*
    Writen by: Oscar Bergström
    https://github.com/OSCARJFB
*/

#include <iostream>
#include "board.h"

board::board(void)
{
    for(int i = 0; i < board_height; ++i)
    {
        for(int j = 0; j < board_width; ++j)
        {
            if(j == border::newline)
            {
                gameBoard[i][j] = '\n';
                continue;
            }

            if(i == border::Top || i == border::Bottom)
            {
                gameBoard[i][j] = '#';
                continue;
            }
    
            if(j == border::Left || j == border::Right)
            {
                gameBoard[i][j] = '#';
                continue;
            }
            
            gameBoard[i][j] = ' '; 
        }
    }
}

void board::printBoard(void)
{
    for(int i = 0; i < board_height; ++i)
    {
        for(int j = 0; j < board_width; ++j)
        {
            std::cout << gameBoard[i][j]; 
        }
    }
}