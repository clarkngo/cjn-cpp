// Author @Clark Jason Ngo
#include <iostream>
#include "guess.h"
using namespace std;		// program uses from the std namespace
							// function main begins the program
int main()
{
    GuessingGame g1;

    cout << g1.getPlayerNum();
    cout << endl;
    return 0;	    	// exit code of the program
}
