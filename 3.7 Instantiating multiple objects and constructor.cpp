// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 3 Introduction to Classes, Objects and Strings
// Fig. 3.7: fig03_07.cpp
// Instantiate multiple objects of the GradeBook class and using
// the GradeBook constructor to specify the course name
// when each GradeBook object is created.

#include "stdafx.h"
#include <iostream>
#include <string> // program uses C++ standard string class
using namespace std;

// GradeBook class definition
// "GradeBook" is a user-defined type.
class GradeBook
{
public:
	// constructor initializes courseName with string supplied as argument
	GradeBook(string name)
	{
		setCourseName(name); // call set function to initialize courseName
	} // end GradeBook constructor

	//  function that sets the course name
	void setCourseName( string name )
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
}; // end class GradeBook

// function main begins program execution
int main()
{
	// create two GradeBook objects
	GradeBook gradeBook1("CS101 Introduction to C++ Programming");
	GradeBook gradeBook2("CS102 Data Structures in C++");

	// display initial value of courseName for each GradeBook
	cout << "gradeBook 1 created for course: " << gradeBook1.getCourseName()
		<< "\ngradeBook 2 created for course: " << gradeBook2.getCourseName()
		<< endl;

	cout << endl;
	system("pause");
} // end function main