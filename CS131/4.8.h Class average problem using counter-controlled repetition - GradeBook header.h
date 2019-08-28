// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 4 Control Statements - Part 1
// Fig. 4:8: Class average problem using counter-controlled repetition: GradeBook header. (.h)
// Definition of class GradeBook that determines a class average.
// Member functions are defined in GradeBook.cpp

#pragma once	  // non-standard preprocessor directive
#include <string> // program uses C++ standard string class 
using namespace std; // program uses from the std namespace

class GradeBook
{
public:
	GradeBook(string); // constructor initializes course name
	void setCourseName(string); // function to set the course name
	string getCourseName(); // function to retrieve the course name
	void displayMessage(); // display a welcome message
	void determineClassAverage(); // averages grades entered by the user
private:
	string courseName; // course name for this GradeBook
}; // end class GradeBook
