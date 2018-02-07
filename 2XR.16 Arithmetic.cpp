// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 2 Introduction to C++ Programming
// Exercise: 2.16 Arithmetic
// Write a program that asks the user to enter two numbers, 
// obtains the two numbers from the user and prints the sum, product, 
// difference, and quotient of the two numbers.

#include "stdafx.h"
#include <iostream> // allows program to output data to the screen

using std::cout; // program uses cout
using std::cin; // program uses cin
using std::endl; // program uses endl

int main()
{
	int x, y;
	cout << "Enter two numbers: ";
	cin >> x >> y;

	cout << "The sum is " << x + y << endl;
	cout << "The product is " << x * y << endl;
	cout << "The difference is " << x - y << endl;
	cout << "The quotient is " << x / y << endl;
	system("pause");
} // end function main