// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 3 Introduction to Classes, Objects and Strings
// Fig.3.15: GradeBook.h
// GradeBook class definition presents the public interface of the class.
// Member function definitons appear in GradeBook.cpp

#pragma once
#include <iostream>
#include <string>
using namespace std;

class GradeBook
{
public:
	GradeBook(string); // constructor initializes courseName  
	void setCourseName(string ); //  function that sets the course name
	string getCourseName(); // function that gets the course name
	void displayMessage(); // function that displays a welcome message
private:
	string courseName; // course name for this GradeBook
}; // end class GradeBook

