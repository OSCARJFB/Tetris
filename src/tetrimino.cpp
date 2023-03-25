/*
    Writen by: Oscar Bergström
    https://github.com/OSCARJFB
*/

#include <random>
#include "tetrimino.h"

tetrimino::tetrimino(int num)
{
    switch (num)
    {
    case type::ST:
        setSTShape();
        break;
    case type::SQ:
        setSQShape();
        break;
    case type::T:
        setTshape();
        break;
    case type::L:
        setLshape();
        break;
    case type::SK:
        setSKshape();
        break;
    }
}

void tetrimino::setSTShape(void)
{
    /************
     *  Shape:
     *
     *  #####
     *
     ************/
    constexpr int x = 0;
    constexpr int y = 1; 
    int startpos = randomGenerator(2, 14);

    tetriminoPiece[0][x] = startpos++;
    tetriminoPiece[0][y] = 4;  // Change a proper starting value later.

    tetriminoPiece[1][x] = startpos++; 
    tetriminoPiece[1][y] = 4; 

    tetriminoPiece[2][x] = startpos++;
    tetriminoPiece[2][y] = 4; 
    
    tetriminoPiece[3][x] = startpos; 
    tetriminoPiece[3][y] = 4; 
}

void tetrimino::setSQShape(void)
{
    /************
     *  Shape:
     *
     *   ##
     *   ##
     *
     ************/
}

void tetrimino::setTshape(void)
{
    /************
     *  Shape:
     *
     *   ###
     *    #
     *
     ************/
}

void tetrimino::setLshape(void)
{
    /************
     *  Shape:
     *
     *    #
     *    #
     *    ##
     *
     ************/
}

void tetrimino::setSKshape(void)
{
    /************
     *  Shape:
     *
     *    ##
     *   ##
     *
     ************/
}

int tetrimino::randomGenerator(int min_range, int max_range)
{
    std::random_device device;
    std::mt19937 random(device());

    std::uniform_int_distribution<> genNum(min_range, max_range);

    return genNum(random);
}