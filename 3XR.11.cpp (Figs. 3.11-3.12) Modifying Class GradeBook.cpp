// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 3 Introduction to Classes, Objects and Strings
// Exercise: 3.15 Modifying Class GradeBook (.cpp)

// Modify class GradeBook (Figs 3.11-3.12) as follows:
// a) Include a second string data member that represents that course instructor's name.
// b) Provide a set function to change the instructor's name and a get function to retrieve it.
// c) Modify the constructor to specify course name and instructor name parameters.
// d) Modify function displayMessage to output the welcome message and course name,
// then the string "This course is presented by: " followed by the instructor's name.
// Use your modified class in a test program that demonstrates the class's new capabilities.

#include "stdafx.h"
#include <iostream>
#include "GradeBook.h"
using namespace std;

GradeBook::GradeBook(string)
{

}

// constructor initalizes courseName with string supplied as argument
// c)
GradeBook::GradeBook(string cname, string iname)
{
	setCourseName(cname); // call set function to initialize courseName
						  // c)
	setInstructorName(iname); // call set function to initalize instructorName
} // end GradeBook constructor

  //  function that sets the course name
void GradeBook::setCourseName(string cname)
{
	courseName = cname; // store the course name in the object
} // end function setCourseName

string GradeBook::getCourseName()
{
	return courseName; // return the object's courseName
} // end function getCourseName

  // b)
void GradeBook::setInstructorName(string iname)
{
	instructorName = iname; // store the course name in the object
} // end function setCourseName

  // b)
string GradeBook::getInstructorName()
{
	return instructorName; // return the object's courseName
} // end function getCourseName

  // function that displays a welcome message
void GradeBook::displayMessage()
{
	// this statement calls getCourseName to get the
	// name of the course this GradeBook represents
	cout << "Welcome to the grade book for\n" << getCourseName() << "!"
		<< endl;
	// d)
	cout << "This course is presented by: " << getInstructorName() << "!"
		<< endl;
} // end function displayMessage


  // REFERENCE

  // Fig.3.12: GradeBook.cpp
  // GradeBook member-function definitions. This file contains
  // implementations of the member functions prototyped in GradeBook.h

  //#include "stdafx.h"
  //#include <iostream>
  //#include "GradeBook.h"
  //using namespace std;
  //
  //// constructor initalizes courseName with string supplied as argument
  //GradeBook::GradeBook(string name)
  //{
  //	setCourseName(name); // call set function to initialize courseName
  //} // end GradeBook constructor
  //
  //  //  function that sets the course name
  //void GradeBook::setCourseName(string name)
  //{
  //	courseName = name; // store the course name in the object
  //} // end function setCourseName
  //
  //string GradeBook::getCourseName()
  //{
  //	return courseName; // return the object's courseName
  //} // end function getCourseName
  //
  //  // function that displays a welcome message
  //void GradeBook::displayMessage()
  //{
  //	// this statement calls getCourseName to get the
  //	// name of the course this GradeBook represents
  //	cout << "Welcome to the grade book for\n" << getCourseName() << "!"
  //		<< endl;
  //} // end function displayMessage