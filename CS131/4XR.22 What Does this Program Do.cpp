// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 4 Control Statements - Part 1
// Exercise: 4.22 ex04_22.cpp What does this program print?

#include "stdafx.h"
#include <iostream>
using namespace std;		
int main()
{
	int row = 1; // initialize row
	int column; // declare column
	while (row >= 1) // loop until row < 1
	{
		column = 1; // set column to 1 as iteration begins

		while (column <= 10)
		{ 
			cout << (row % 2 ? "<" : ">"); // output
			++column; // increment column
		} // end inner while
		--row; // decrement row
		cout << endl; // begin new output line
	} // end outer while
	system("pause");	// allows the system to pause
	return 0;	    	// exit code of the program
} // end main
