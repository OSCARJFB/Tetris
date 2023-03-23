#pragma once

class board
{
public:
    static constexpr int height = 20; 
    static constexpr int width = 10; 
    
    char gameBoard[height][width];

    board(void); 
    void printBoard(void); 
private: 

};
