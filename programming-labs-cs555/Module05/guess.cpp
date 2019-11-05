// Author @Clark Jason Ngo
// #include "stdafx.h"
#include <iostream>
#include "guess.h"
#include <time.h>         /* time */
using namespace std;
GuessingGame::GuessingGame() {
    srand (time(NULL));   // to have true randomnesss
    _winningNum = (rand() % 100 + 1);
}

// SETTERS
void GuessingGame::setPlayerNum(int playerNum)
{
    _playerNum = playerNum;
}

// GETTERS
int GuessingGame::getPlayerNum()
{
    return _playerNum;
}

void GuessingGame::run()
{

}
