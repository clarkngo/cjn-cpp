// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 4 Control Statements - Part 1
// Self-review: 4.8
// WWrite the statements in Exercise 4.7 to calculate x raised to the y power. 
// The program should have a while repetition statement.

#include "stdafx.h"
#include <iostream>
using namespace std;		// program uses from the std namespace
							// function main begins the program
int main()
{
	int x;
	int y;
	int i;
	int power;

	cout << "Enter value for x: ";
	cin >> x;
	
	cout << "Enter value for y: ";
	cin >> y;
	
	i = 1;
	power = 1;
	
	while (i <= y)
	{ 
		power *= x;
		++i;
	}
	cout << "Power is " << power;

	cout << endl;
	system("pause");	// allows the system to pause
	return 0;	    	// exit code of the program
} // end main
