// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 4 Control Statements - Part 1
// Fig. 4:18: fig.04_18.cpp
// Preincrementing and postincrementing

#include "stdafx.h"
#include <iostream>
using namespace std;		// program uses from the std namespace
							// function main begins the program
int main()
{
	int c;

	// demonstrate postincrement
	c = 5; // assign 5 to c
	cout << c << endl; // print 5
	cout << c++ << endl; // print 5 then postincrement
	cout << c << endl; // print 6

	cout << endl; // skip a line

	// demonstrate preincrement
	c = 5; // assign 5 to c
	cout << c << endl; // print 5
	cout << ++c << endl; // preincrement then print 6
	cout << c << endl; // print 6

	system("pause");	// allows the system to pause
	return 0;	    	// exit code of the program
} // end main
