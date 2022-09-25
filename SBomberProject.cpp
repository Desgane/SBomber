
#include <conio.h>

#include "SBomber.h"
#include "MyTools.h"
#include "LoggerSingleton.h"
using namespace std;

//========================================================================================================================

int main(void)
{
    LoggerSingleton::geg().OpenLogFile("log.txt");

    SBomber game;

    do {
        game.TimeStart();

        if (_kbhit())
        {
            game.ProcessKBHit();
        }

        MyTools::ClrScr();

        game.DrawFrame();
        game.MoveObjects();
        game.CheckObjects();

        game.TimeFinish();

    } while (!game.GetExitFlag());

    LoggerSingleton::geg().CloseLogFile();

    return 0;
}
