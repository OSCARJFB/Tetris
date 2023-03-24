/*
    Writen by: Oscar Bergström
    https://github.com/OSCARJFB
*/

class tetrimino
{
private:
    static constexpr int tetra = 4;
    static constexpr int xy = 4;

    void setSTShape(void);
    void setSQShape(void);
    void setTshape(void);
    void setLshape(void);
    void setSKshape(void);

public:
    char tetroGrid[tetra][xy];

    tetrimino(int type);
};