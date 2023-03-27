/*
    Writen by: Oscar Bergström
    https://github.com/OSCARJFB
*/

#include <termios.h>
#include "kbhit.h"

kbhit::kbhit(void)
{
    if(tcgetattr(0, &terminalReset) || tcgetattr(0, &terminalRaw))
    {
        /*Error*/
    }
}

char kbhit::_kbhit()
{

}

kbhit::~kbhit()
{

}