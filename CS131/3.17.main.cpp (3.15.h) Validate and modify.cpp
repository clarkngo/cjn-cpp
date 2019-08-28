// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 3 Introduction to Classes, Objects and Strings
// Fig. 3.17: fig03_17.cpp
// Create and manipulate a GradeBook object; illustrate validation.

#include "stdafx.h"
#include <iostream>
#include "GradeBook.h"
using namespace std;

// function main begins program execution
int main()
{
	// create two GradeBook objects
	GradeBook gradeBook1("CS101 Introduction to Programming in C++");
	GradeBook gradeBook2("CS102 C++ Data Structures");

	// display initial value of courseName for each GradeBook
	cout << "gradeBook1's initial course name is: " << gradeBook1.getCourseName()
		<< "\ngradeBook2's initial course name is: " << gradeBook2.getCourseName()
		<< endl;

	// modify myGradeBook's courseName (with a valid-length string)
	gradeBook1.setCourseName("CS101 C++ Programming");

	// display each GradeBook's courseName
	cout << "\ngradeBook1's course name is: "
		<< gradeBook1.getCourseName()
		<< "\ngradeBook2's course name is: "
		<< gradeBook2.getCourseName() << endl;

	cout << endl;
	system("pause");
} // end function main