/*
    Writen by: Oscar Bergström
    https://github.com/OSCARJFB
*/

#pragma once
#include <random>

class tetrimino
{
private:
    static constexpr int tetra = 4;
    static constexpr int xy = 2;

    enum type
    {
        ST = 1,
        SQ = 2,
        T = 3,
        L = 4,
        SK = 5,
    };

    void setSTShape(void);
    void setSQShape(void);
    void setTshape(void);
    void setLshape(void);
    void setSKshape(void);
    int randomGenerator(int min_range, int max_range);

public:
    char rotMode1[tetra][xy];
    char rotMode2[tetra][xy];

    tetrimino(int type);
};