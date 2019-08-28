// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 3 Introduction to Classes, Objects and Strings
// Fig. 3.1: fig03_01.cpp
// Define class GradeBook with a member function displayMessage,
// create a GradeBook object and call its displayMessage function.

#include "stdafx.h"
#include <iostream>
using namespace std;

// GradeBook class definition
// "GradeBook" is a user-defined type.
class GradeBook
{
	public: // access specifier
		// member function that displays a welcome message to the GradeBook user
		// "void" is a return type.
		void displayMessage()
		{
			cout << "Welcome to the Grade Book!" << endl;
		} // end function displayMessage
}; // end class GradeBook

// function main begins program execution
int main()
{
	GradeBook myGradeBook; // create a GradeBook object named myGradeBook
	// "." dot operator.
	myGradeBook.displayMessage(); // call object's displayMessage function

	cout << endl;
	system("pause");
} // end function main