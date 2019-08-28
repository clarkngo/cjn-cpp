// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 3 Introduction to Classes, Objects and Strings
// Exercise: 3.15 Modifying Class GradeBook (.h)

// Modify class GradeBook (Figs 3.11-3.12) as follows:
// a) Include a second string data member that represents that course instructor's name.
// b) Provide a set function to change the instructor's name and a get function to retrieve it.
// c) Modify the constructor to specify course name and instructor name parameters.
// d) Modify function displayMessage to output the welcome message and course name,
// then the string "This course is presented by: " followed by the instructor's name.
// Use your modified class in a test program that demonstrates the class's new capabilities.

#pragma once
#include <iostream>
#include <string>
using namespace std;

class GradeBook
{
public:
	GradeBook(string);
	// c)
	GradeBook(string, string); // constructor initializes courseName and instructorName

	void setCourseName(string); //  function that sets the course name
	string getCourseName(); // function that gets the course name
							// b)
	void setInstructorName(string); //  function that sets the instructor's name
	string getInstructorName(); // function that gets the instructor's name
								// d)
	void displayMessage(); // function that displays a welcome message
private:
	string courseName; // course name for this GradeBook
					   // a)
	string instructorName; // instructor name for this GradeBook
}; // end class GradeBook


   // REFERENCE

   // Fig.3.11: GradeBook.h
   // GradeBook class definition. This file presents GradeBook's public
   // interface without implementations of GradeBook's member
   // functions, which are defined in GradeBook.cpp

   //#pragma once
   //#include <iostream>
   //#include <string>
   //using namespace std;
   //
   //class GradeBook
   //{
   //public:
   //	GradeBook(string); // constructor initializes courseName  
   //	void setCourseName(string); //  function that sets the course name
   //	string getCourseName(); // function that gets the course name
   //	void displayMessage(); // function that displays a welcome message
   //private:
   //	string courseName; // course name for this GradeBook
   //}; // end class GradeBook

