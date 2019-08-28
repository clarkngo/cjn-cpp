>>// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 4 Control Statements - Part 1
// Exercise: 4.32 Sides of a Triangle

// Write a program that reads three nonzero double values and
// determines and prints whether they could represent sides of a triangle.

#include "stdafx.h"
#include <iostream> // allows program to output data to the screen
using namespace std;

int main()
{
	double a;
	double b;
	double c;

	cout << "Enter three sides of a triangle: ";
	cin >> a >> b >> c;

	cout << a <<" " << b <<" "<< c 
		<< ": represents three sides of a triangle";

	cout << endl;
	system("pause");
} // end function main