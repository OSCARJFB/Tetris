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
     *  ####
     *
     ************/
    constexpr int x = 0;
    constexpr int y = 1; 
    int startpos = randomGenerator(2, 14);

    // Rotation 1
    rotMode1[0][x] = startpos++;
    rotMode1[0][y] = 4;  

    rotMode1[1][x] = startpos++; 
    rotMode1[1][y] = 4; 

    rotMode1[2][x] = startpos++;
    rotMode1[2][y] = 4; 
    
    rotMode1[3][x] = startpos; 
    rotMode1[3][y] = 4; 

    // Rotation 2
    rotMode2[0][x] = startpos++;
    rotMode2[0][y] = 3;  

    rotMode2[1][x] = startpos++; 
    rotMode2[1][y] = 4; 

    rotMode2[2][x] = startpos++;
    rotMode2[2][y] = 5; 
    
    rotMode2[3][x] = startpos; 
    rotMode2[3][y] = 6; 
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