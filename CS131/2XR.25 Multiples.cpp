// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 2 Introduction to C++ Programming
// Exercise: 2.25 Multiples
// Write a program that reads 2 integers and determines and prints 
// if the first is a multiple of the second. [Hint: use the modulus operator.]

#include "stdafx.h"
#include <iostream> // allows program to output data to the screen

using std::cout; // program uses cout
using std::cin; // program uses cin
using std::endl; // program uses endl

int main()
{
	int x, y, z;
	cout << "Enter two integers: ";
	cin >> x >> y;
	z = y % x;
	if (z == 0)
		cout << "The first integer is a multiple of the second integer." << endl;
	if (z != 0)
		cout << "The first integer is NOT a multiple of the second integer." << endl;


	cout << endl;
	system("pause");
} // end function main