// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 2 Introduction to C++ Programming
// Exercise: 2.28 Digits of an Integer
// Write a program that inputs a five-digit integer, separates the integer
// into its digits and prints them separately by three spaces each. [Hint: Use the
// integer division and modulus operators.] For example, if the user types in 42339, 
// the program should print:

// 4	2	3	3	9

#include "stdafx.h"
#include <iostream> // allows program to output data to the screen

using std::cout; // program uses cout
using std::cin; // program uses cin
using std::endl; // program uses endl

int main()
{
	int x, y, z, a, b, q;
	cout << "Enter a five-digit integer: ";
	cin >> q;
	x = q / 10000;
	y = (q / 1000) % 10;
	z = (q / 100) % 10;
	a = (q / 10) % 10;
	b = q % 10;
	cout << x << "   " << y << "   " << z << "   " << a << "   " << b;

	cout << endl;
	system("pause");
} // end function main