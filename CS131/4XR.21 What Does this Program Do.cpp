// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 4 Control Statements - Part 1
// Exercise: 4.21 ex04_21.cpp What does this program print?

#include "stdafx.h"
#include <iostream>
using namespace std;		
int main()
{
	int count = 1; // initialize count

	while (count <= 10) // loop 10 times
	{
		// output line of text
		cout << (count % 2 ? "****" : "++++++++") << endl;
		++count; // increment count
	} // end while
	system("pause");	// allows the system to pause
	return 0;	    	// exit code of the program
} // end main
