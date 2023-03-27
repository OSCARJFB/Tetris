/*
    Writen by: Oscar Bergström
    https://github.com/OSCARJFB
*/

#pragma once
#include <termios.h>

class kbhit
{
private:
    termios terminalReset; 
    termios terminalRaw; 
public:
    kbhit(void); 
    ~kbhit(); 
    char _kbhit(void);
};