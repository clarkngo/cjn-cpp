// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 4 Control Statements - Part 1
// Exercise: 4.12: ex04_12.cpp
// What does this program print?

#include "stdafx.h"
#include <iostream>
using namespace std;		// program uses from the std namespace
							// function main begins the program
int main()
{
	int y; // declare y
	int x = 1; // initialize x
	int total = 0; // initialze total

	while (x <= 10) // loop 10 times
	{
		y = x * x; // perform calculation
		cout << y << endl; // output calculation
		total += y; // add y to total
		x++; // increment counter x
	} // end while

	cout << "Total is " << total << endl; // display result

	cout << endl;
	system("pause");	// allows the system to pause
	return 0;	    	// exit code of the program
} // end main
