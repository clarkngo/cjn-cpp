// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 3 Introduction to Classes, Objects and Strings
// Fig.3.9: GradeBook.h
// GradeBook class definition in a separate file from main.

#pragma once
#include <iostream>
#include <string>
using namespace std;

class GradeBook
{
public:
	// constructor initializes courseName with string supplied as argument
	GradeBook(string name)
	{
		setCourseName(name); // call set function to initialize courseName
	} // end GradeBook constructor

	  //  function that sets the course name
	void setCourseName(string name)
	{
		courseName = name; // store the course name in the object
	} // end function setCourseName

	string getCourseName()
	{
		return courseName; // return the object's courseName
	} // end function getCourseName

	  // function that displays a welcome message
	void displayMessage(string courseName)
	{
		// this statement calls getCourseName to get the
		// name of the course this GradeBook represents
		cout << "Welcome to the grade book for\n" << getCourseName() << "!"
			<< endl;
	} // end function displayMessage
private:
	string courseName; // course name for this GradeBook
};

