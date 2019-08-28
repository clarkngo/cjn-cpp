// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 4 Control Statements - Part 1
// Exercise: 4:18 Tabular Output

// Write a C++ program that uses a while statement and the tab escape sequence 
// \t to print the following table of values:

#include "stdafx.h"
#include <iostream>
#include "FindLargest.h"
using namespace std;		// program uses from the std namespace
							// function main begins the program
int main()
{
	int n = 1;
	cout << "N\t" << "10*N\t" << "100*N\t" << "1000*N\t";
	cout << endl << endl;
	while (n <= 5)
	{
		cout << n << "\t" << n * 10 << "\t" << n * 100 << "\t" << n * 1000;
		cout << endl;
		n += 1;
	}
	system("pause");	// allows the system to pause
	return 0;	    	// exit code of the program
} // end main
