// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 4 Control Statements - Part 1
// Self-review: 4.6
// State the values of each of these int variables after the calcuation is performed.
// Assume that, when each statement begins executing, all variables have the integer
// value 5.
// a) product *= x++;
// b) quotient /= ++x;

#include "stdafx.h"
#include <iostream>
using namespace std;		// program uses from the std namespace
							// function main begins the program
int main()
{
	int product, quotient, x;
	product = 5;
	quotient = 5;

	x = 5;
	product *= x++;
	cout << "Product is: " << product << ", x is: " << x << endl;

	x = 5;
	quotient /= ++x;
	cout << "Quotient is: " << quotient << ", x is: " << x << endl;

	system("pause");	// allows the system to pause
	return 0;	    	// exit code of the program
} // end main
