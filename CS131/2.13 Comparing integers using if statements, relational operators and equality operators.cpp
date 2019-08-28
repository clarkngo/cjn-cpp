// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 2 Introduction to C++ Programming
// Fig. 2.13: fig02_13.cpp
// Comparing integers using if statements, relational operators
// and equality operators.

#include "stdafx.h"
#include <iostream> // allows program to output data to the screen

using std::cout; // program uses cout
using std::cin; // program uses cin
using std::endl; // program uses endl

// function main begins program execution
int main()
{
	int number1; // first integer to compare
	int number2; // second integer to compare

	cout << "Enter two integers to compare: "; // prompt user for data
	cin >> number1 >> number2; // read two integers from user

	if (number1 == number2)
		cout << number1 << " == " << number2 << endl;
	
	if (number1 != number2)
		cout << number1 << " != " << number2 << endl;

	if (number1 < number2)
		cout << number1 << " < " << number2 << endl;

	if (number1 > number2)
		cout << number1 << " > " << number2 << endl;

	if (number1 <= number2)
		cout << number1 << " <= " << number2 << endl;

	if (number1 >= number2)
		cout << number1 << " >= " << number2 << endl;

	system("pause");
	return 0;
} // end function main