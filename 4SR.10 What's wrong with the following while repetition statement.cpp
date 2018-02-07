// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 4 Control Statements - Part 1
// Self-review: 4.10
// What's wrong in the following while repetition statement?

//  while ( z >= 0)
//		sum += z;



#include "stdafx.h"
#include <iostream>
using namespace std;		// program uses from the std namespace
							// function main begins the program
int main()
{
	int z = 1;
	int sum = 0;
	// The value of the variable z is never changed in the while statement. Therefore,
	// if the loop-continuation condition (z >= 0) is intitially true, an infinite loop
	// is created. To prevent the infinite loop, z must be decremented so that it
	// eventually becomes less than 0.
	while (z >= 0)
	{
		sum += z;
		--z;
	}

	cout << endl;
	system("pause");	// allows the system to pause
	return 0;	    	// exit code of the program
} // end main
