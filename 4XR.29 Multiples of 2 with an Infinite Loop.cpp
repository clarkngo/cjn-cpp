// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 4 Control Statements - Part 1
// Exercise: 4.29 Multiples of 2 with an Infinite Loop

// Write a program that prints the powers of the integer 2,
// namely 4, 8, 16, 32, 64, etc. Your while loop should not 
// terminate (i.e., you should create an infinite loop). To do
// this, simply use the keyword true as the expression for the
// while statement. What happens when you run this program?

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int base = 2;
	cout << base << endl;

		while (base != 1)
		{
			base *= 2;
			cout << base << endl;
		}

	// not included
	cout << endl;
	system("pause");	// allows the system to pause
	return 0;	    	// exit code of the program
} // end main
