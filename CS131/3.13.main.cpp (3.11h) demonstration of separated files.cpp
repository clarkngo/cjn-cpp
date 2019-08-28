// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 3 Introduction to Classes, Objects and Strings
// Fig. 3.13: fig03_13.cpp

#include "stdafx.h"
#include <iostream>
#include "GradeBook.h"
using namespace std;

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