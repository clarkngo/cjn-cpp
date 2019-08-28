// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 3 Introduction to Classes, Objects and Strings
// Fig. 3.5: fig03_05.cpp
// Define class GradeBook that contains a courseName data member
// and member functions to set and gets its value;
// Create and manipulate a GradeBook object with these funct ions.

// set functions are mutators (because they mutate, or change, values.
// get functions are accessors (because they access values).

#include "stdafx.h"
#include <iostream>
#include <string> // program uses C++ standard string class
using namespace std;

// GradeBook class definition
// "GradeBook" is a user-defined type.
class GradeBook
{
public:
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

// function main beings program execution
int main()
{
	string nameOfCourse; // string of characters to store the course name
	GradeBook myGradeBook; // create a GradeBook object named myGradeBook
	
	// display initial value of courseName
	cout << "Initial course name is: " << myGradeBook.getCourseName()
		<< endl;

	// prompt for, input and setcourse name
	cout << "\nPlease enter the course name:" << endl;
	getline(cin, nameOfCourse); // read a course nae with blanks
	myGradeBook.setCourseName(nameOfCourse); // set the course name

	cout << endl; // output a blank line
	// call myGradeBook's displayMessage function
	// and pass nameOfCourse as an argument
	myGradeBook.displayMessage(nameOfCourse);

	cout << endl;
	system("pause");
} // end function main