// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 2 Introduction to C++ Programming
// Fig. 2.13: fig02_13.cpp
// Addition program that displays the sum of two integers.

#include "stdafx.h"
#include <iostream> // allows program to output data to the screen

// function main begins program execution
int main()
{
	// variable declarations
	int number1; // first integer to add
	int number2; // second integer to add
	int sum; // sum of number1 and number2

	std::cout << "Enter first integer: "; // prompt user for data
	std::cin >> number1; // read first integer from user into number1
	
	std::cout << "Enter second integer: "; // prompt user for data
	std::cin >> number2; // read second integer from user into number2

	sum = number1 + number2; // add the numbers; store result in sum

	std::cout << "Sum is " << sum << std::endl; // display sum; end line
	system("pause");
	return 0;
} // end function main