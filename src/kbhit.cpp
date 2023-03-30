/*
    Writen by: Oscar Bergström
    https://github.com/OSCARJFB
*/

#include <iostream>
#include <termios.h>
#include <unistd.h>
#include <system_error>
#include "kbhit.h"

kbhit::kbhit(void)
{
    try
    {
        if (tcgetattr(STDIN_FILENO, &terminalReset) || tcgetattr(STDIN_FILENO, &terminalRaw))
        {
            throw std::system_error(errno, std::generic_category(), "Failed to get termios struct using tcgetattr()");
        }

        terminalRaw.c_lflag &= ~(ICANON | ECHO);
        terminalRaw.c_cc[VMIN] = 0; 
        terminalRaw.c_cc[VTIME] = 0; 

        if(tcsetattr(STDIN_FILENO, TCSANOW, &terminalRaw))
        {
            throw std::system_error(errno, std::generic_category(), "Failed to set termios struct using tcgetattr()");
        }
    }
    catch (const std::system_error &ex)
    {
        std::cerr << ex.what();
        exit(EXIT_FAILURE);
    }
}

char kbhit::_kbhit()
{ 
    char byte = ' ';
    
    try
    {
        if(read(STDIN_FILENO, &byte, sizeof(char)) == -1)
        {
            throw std::system_error(errno, std::generic_category(), "Failed reading Nbytes using read()");
        }
    }
    catch(const std::exception& ex)
    {
        std::cerr << ex.what();
    }

    return byte;
}

kbhit::~kbhit()
{
    tcsetattr(STDIN_FILENO, TCSANOW, &terminalReset);
}