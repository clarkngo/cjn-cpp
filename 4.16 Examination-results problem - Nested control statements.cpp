// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 4 Control Statements - Part 1
// Fig. 4:16: fig.04_16.cpp
// Examination-results problem: Nested control statements

#include "stdafx.h"
#include <iostream>
using namespace std;		// program uses from the std namespace
							// function main begins the program
int main()
{
	// initializing variables in declarations
	int passes = 0; // number of passes
	int failures = 0; // number of failures
	int studentCounter = 1; // student counter
	int result; // one exam result (1 = pass, 2 = fail)

	// process 10 students using counter-controlled loop
	while (studentCounter <= 10)
	{
		// prompt user for input and obtain value from user
		cout << "Enter result (1 = pass, 2 = fail): ";
		cin >> result; // input result
	
		// if...else nested in while
		if (result == 1)			// if result is 1,
			passes = passes + 1;	// increment passes;
		else                        // else result is not 1, so
			failures = failures + 1;// increment failures

		// increment studentCounter so loop eventually terminates
		studentCounter = studentCounter + 1;
	} // end while

	// termination phase; display number of passes and failures
	cout << "Passed " << passes << "\nFailed " << failures << endl;

	// determine whether more than eight students passed
	if (passes > 8)
		cout << "Bonus to instructor!" << endl;
	system("pause");	// allows the system to pause
	return 0;	    	// exit code of the program
} // end main
