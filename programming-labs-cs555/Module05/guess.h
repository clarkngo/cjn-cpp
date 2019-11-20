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
        void setPlayerNum();

        // GETTERS
        int getPlayerNum() const;

        // check if player wins
        bool isWinner();
        // run the game
        void run();
};
