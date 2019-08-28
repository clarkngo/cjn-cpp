// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 4 Control Statements - Part 1
// Self-review: 4.5
// Combine the statements that you wrote in Exercise 4.4 into a program that calculates
// and prints the sum of the integers from 1 to 10. Use the while statement to loop
// through the calculation and increment statements. The loop should terminate when
// the value of x becomes 11.

#include "stdafx.h"
#include <iostream>
using namespace std;		// program uses from the std namespace
							// function main begins the program
int main()
{
	int sum, x;
	x = 1;
	sum = 0;
	while (x != 11)
	{ 
		sum += x++;
	}
		cout << "The sum is: " << sum << endl;
	system("pause");	// allows the system to pause
	return 0;	    	// exit code of the program
} // end main
