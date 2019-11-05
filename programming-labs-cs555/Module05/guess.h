// Author @Clark Jason Ngo
#pragma once
#include <iostream>
class GuessingGame
{
    private:
        int _winningNum;
        int _playerNum;
    public:
        GuessingGame();
        // SETTERS
        void setPlayerNum(int playerNum);
        // GETTERS
        int getPlayerNum();
        void run();
};
