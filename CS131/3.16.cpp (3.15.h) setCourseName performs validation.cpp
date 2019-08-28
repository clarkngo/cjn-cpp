// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 3 Introduction to Classes, Objects and Strings
// Fig.3.16: GradeBook.cpp
// Implementations

#include "stdafx.h"
#include <iostream>
#include "GradeBook.h"
using namespace std;

// constructor initalizes courseName with string supplied as argument
GradeBook::GradeBook(string name)
{
	setCourseName(name); // validate and store courseName
} // end GradeBook constructor

// function that sets the course name;
// ensures that the course name has at most 25 characters
void GradeBook::setCourseName(string name)
{
	if (name.length() <= 25) // if name has 25 or fewer characters
		courseName = name; // store the course name in the object
	if (name.length() > 25) // if name has more than 25 characters
	{
		// set courseName to first 25 characters of parameter name
		courseName = name.substr(0, 25); // start at 0, length of 25

		cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
			<< "Limiting courseName to first 25 characters.\n" << endl;
	}

} // end function setCourseName

string GradeBook::getCourseName()
{
	return courseName; // return the object's courseName
} // end function getCourseName

  // function that displays a welcome message
void GradeBook::displayMessage()
{
	// this statement calls getCourseName to get the
	// name of the course this GradeBook represents
	cout << "Welcome to the grade book for\n" << getCourseName() << "!"
		<< endl;
} // end function displayMessage