// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 2 Introduction to C++ Programming
// Exercise: 2.18 Comparing Integers
// Write a program that asks the user to enter two integers, obtains the numbers
// from the user, then prints the larger number followed by the words "is larger."
// if the numbersare equal, print the message the numbers are equal."

#include "stdafx.h"
#include <iostream> // allows program to output data to the screen

using std::cout; // program uses cout
using std::cin; // program uses cin
using std::endl; // program uses endl

int main()
{
	int x, y;
	cout << "Enter two integers: ";
	cin >> x >> y;
	if (x > y)
		cout << x << " is larger.";
	else if (y > x)
		cout << y << " is larger.";
	else // ( x == y)
		cout << "These numbers are equal.";

	cout << endl;
	system("pause");
} // end function main