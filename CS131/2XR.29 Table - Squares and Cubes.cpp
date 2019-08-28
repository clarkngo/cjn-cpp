// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 2 Introduction to C++ Programming
// Exercise: 2.29 Table
// Using the techniques of this chapter, write a program that calculates the squares and
// cubes of the integers from 0 to 10. Use tabs to print the following neatly formatted
// table of values:

// Integer	square	cube
// 0		0		0
// 1		1		1
// 2		4 		8
// 3		9		27
// 4		16		64
// 5		25		125
// 6		36		216
// 7		49		343
// 8		64		512
// 9		81		729
// 10		100		1000


#include "stdafx.h"
#include <iostream> // allows program to output data to the screen

using std::cout; // program uses cout
using std::cin; // program uses cin
using std::endl; // program uses endl

int main()
{
	int x = 0, y = 1, z = 2, a = 3, b = 4, c = 5, d = 6, e = 7, f = 8, g = 9, h = 10;
	cout << "integer\tsquare\tcube" << endl;
	cout << x << "\t" << x * x << "\t" << x * x * x << endl;
	cout << y << "\t" << y * y << "\t" << y * y * y << endl;
	cout << z << "\t" << z * z << "\t" << z * z * z << endl;
	cout << a << "\t" << a * a << "\t" << a * a * a << endl;
	cout << b << "\t" << b * b << "\t" << b * b * b << endl;
	cout << c << "\t" << c * c << "\t" << c * c * c << endl;
	cout << d << "\t" << d * d << "\t" << d * d * d << endl;
	cout << e << "\t" << e * e << "\t" << e * e * e << endl;
	cout << f << "\t" << f * f << "\t" << f * f * f << endl;
	cout << g << "\t" << g * g << "\t" << g * g * g << endl;
	cout << h << "\t" << h * h << "\t" << h * h * h << endl;

	cout << endl;
	system("pause");
} // end function main