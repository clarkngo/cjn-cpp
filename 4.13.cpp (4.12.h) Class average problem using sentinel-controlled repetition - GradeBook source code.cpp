// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 4 Control Statements - Part 1
// Fig. 4:13: GradeBook.cpp
// Definition of class GradeBook that determines a class average.
// Member functions are defined in GradeBook.cpp

// Class average problem using counter - controlled repetition :
// GradeBook source code file. (.cpp)

#include "stdafx.h"
#include <iostream>
#include <iomanip> // parameterized stream manipulators
#include "GradeBook.h"
using namespace std;

// constructor initializes courseName with string supplied as argument
GradeBook::GradeBook( string name)
{
	setCourseName(name); // validate and store courseName
} // end GradeBook constructor

void GradeBook::setCourseName(string name)
{
	if (name.length() <= 25) // if name has 25 or fewer characters
		courseName = name; // store course name in the object
	else //  if name is longer than 25 characters
	{
		// set courseName to first 25 characters of parameter name
		courseName = name.substr(0, 25); // select first 25 characters
		cout << "Name \"" << name << "\" exceeds maximum length (25). \n"
			<< "Limiting courseName to first 25 characters.\n" << endl;
	} // end if...else
} // end function setCourseName

// function to retrieve the course name
string GradeBook::getCourseName()
{
	return courseName;
} // end function getCourseName

// display a welcome message to the GradeBook user
void GradeBook::displayMessage()
{
	cout << "Welcome to the grade book for \n" << getCourseName() << "!\n"
		<< endl;
} // end function displayMessage

// determine class average based on 10 grades entered by user
void GradeBook::determineClassAverage()
{
	int total; // sum of grades entered by user
	int gradeCounter; // number of the grade to be entered next
	int grade; // grade value entered by user
	double average; // number with decimal point for average

	// initialization phase
	total = 0; // initialize total
	gradeCounter = 0; // initial loop counter

	// processing phase
	// prompt for input and read grade from user
	cout << "Enter grade or -1 to quit: "; 
	cin >> grade; // input grade or sentinel value

	while (grade != -1) // while grade is not -1
	{
		total = total + grade; // add grade to total
		gradeCounter = gradeCounter + 1; // increment counter by 1

		// prompt for input and read grade from user
		cout << "Enter grade or -1 to quit: ";
		cin >> grade; // input grade or sentinel value
	} // end while

	// termination phase
	if (gradeCounter != 0) // if user entered at least one grade...
	{
		// calculate average of all grades entered
		// static_cast<double> (total) - creates a temporary floating-point
		// copy of its operand in parentheses - total. This is called 
		// "explicit conversion".
		average = static_cast<double> (total) / gradeCounter; // integer division yields integer results

		// display total and average of grades
		cout << "\nTotal of all 10 grades is " << total << endl;
		cout << "Class average is " << setprecision(2) << fixed << average << endl;
	} // end if
	else // no grades were entered, so output appropriate message
		cout << "No grades were entered" << endl;
} // end function determineClassAverage