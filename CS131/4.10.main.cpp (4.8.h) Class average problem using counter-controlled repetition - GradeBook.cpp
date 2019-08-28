// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 4 Control Statements - Part 1
// Fig. 4:10: fig04_10.cpp 
// Create GradeBook object and invoke its determineClassAverage function.

// Class average problem using counter-controlled repetition: 
// Creating an object of class GradeBook (Fig. 4.8 - Fig. 4.9) and
// invoking its determineClassAverage member function. (.cpp)

#include "stdafx.h"
#include "GradeBook.h"		// includes GradeBook class
using namespace std;		// program uses from the std namespace
							// function main begins the program
int main()
{
	// create GradeBook object myGradeBook and
	// pass course name to constructor
	GradeBook myGradeBook("CS101 C++ Programming");

	myGradeBook.displayMessage(); // display welcome message
	myGradeBook.determineClassAverage(); // find average of 10 grades

	system("pause");	// allows the system to pause
	return 0;	    	// exit code of the program
} // end main
