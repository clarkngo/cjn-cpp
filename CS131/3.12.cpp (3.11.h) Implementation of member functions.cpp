// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 3 Introduction to Classes, Objects and Strings
// Fig.3.12: GradeBook.cpp
// GradeBook member-function definitions. This file contains
// implementations of the member functions prototyped in GradeBook.h

#include "stdafx.h"
#include <iostream>
#include "GradeBook.h"
using namespace std;

// constructor initalizes courseName with string supplied as argument
GradeBook::GradeBook(string name)
{
	setCourseName(name); // call set function to initialize courseName
} // end GradeBook constructor

  //  function that sets the course name
void GradeBook::setCourseName(string name)
{
	courseName = name; // store the course name in the object
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