// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 4 Control Statements - Part 1
// Exercise: 4.28 Checkerboard Pattern of Asterisks)

// Write a program that displays the following checkerboard pattern.
// Your program must use only three output statements, one of each of
// the following forms:

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int counter1 = 0;
	int counter2 = 1;
	while (counter2 != 8)
	{
		while (counter1 != 8)
		{
			cout << "* ";
			counter1++;
		}
		
		counter1 = 0;
		cout << endl;
		counter2++;
		if (counter2 % 2 == 0)
		{
			cout << ' ';
		}
	}
	// not included
	cout << endl;
	system("pause");	// allows the system to pause
	return 0;	    	// exit code of the program
} // end main
