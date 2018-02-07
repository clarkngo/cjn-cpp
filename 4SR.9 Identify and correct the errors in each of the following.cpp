// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 4 Control Statements - Part 1
// Self-review: 4.9
// Identify and correct the errors in each of the following:

// a) while ( c<= 5)
// {
//		product *= c;
//		++c;

// b) cin << value;

// c) if (gender == 1)
//		cout << "Woman" << endl;
//	  else;
//		cout << "Man" << endl;


#include "stdafx.h"
#include <iostream>
using namespace std;		// program uses from the std namespace
							// function main begins the program
int main()
{
	int c = 1;
	int product = 0;
	int value;
	int gender = 1;
	// a) Error: missing closing right brace of the while body.
	//		Correction: Add closing right brace after the statement c++;
	while (c <= 5)
	{
		product *= c;
		++c;
	}
	// b) Error: stream insertion instead of stream extraction
	//		Correction: << changed to >>.
	cin >> value;

	// c) Error: semicolon after else results in a logic error.
	// 				The second output statement will always be executed.
	//		Correction: Remove the semicolon after else.
	if (gender == 1)
		cout << "Woman" << endl;
	 else
		cout << "Man" << endl;


	cout << endl;
	system("pause");	// allows the system to pause
	return 0;	    	// exit code of the program
} // end main
