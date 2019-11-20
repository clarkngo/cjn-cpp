// Author @Clark Jason Ngo
// #include "stdafx.h"
#include <iostream>
#include "guess.h"
#include <time.h>         /* time */
using namespace std;
GuessingGame::GuessingGame()
{
    srand (time(NULL));   // to have true randomnesss
    _winningNum = (rand() % 100 + 1);
}

// SETTERS
void GuessingGame::setPlayerNum()
{
    int input;
    cout << "Enter a number from 1 to 100:\t";
    cin >> input;
    // while
    while (cin.fail() || input < 1 || input > 100)
    {
        cin.clear();            // clear previous input
        cin.ignore(1, '\n');    // discard previous input

        cout << "Enter a number from 1 to 100:\t";
        cin >> input;
    }
    _playerNum = input;
}

// GETTERS
int GuessingGame::getPlayerNum() const
{
    return _playerNum;
}

bool GuessingGame::isWinner()
{
    return _playerNum == _winningNum ? true : false;
}

void GuessingGame::run()
{
    int input;
    cout << "COMPUTER: Let's play a game. I have chosen a number between 1 to 100." << endl;
    cout << "Are you able to guess what is the number?" << endl;

    GuessingGame::setPlayerNum();

    while (!isWinner())
    {
        if (GuessingGame::getPlayerNum() > _winningNum)
        {
            cout << "Too high!";
        }
        else
        {
            cout << "Too low!";
        }


        cout << endl;
        GuessingGame::setPlayerNum();
    }

    cout << "You win! ＼(＾O＾)／" << endl;

}
