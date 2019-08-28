// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 4 Control Statements - Part 1
// Exercise: 4.30 Calculating a Circle's Diameter, Circumeference and Area

// Write a program that reads the radius of a circle (as a double value)
// and computes and prints the diameter, the circumefernce and the area.
// Use the value of 3.14159 for (pie).


#include "stdafx.h"
#include <iostream> // allows program to output data to the screen

using std::cout; // program uses cout
using std::cin; // program uses cin
using std::endl; // program uses endl

int main()
{
	double x; //circle radius
	double y; //circle diameter (radius * 2)
	double z; //circle circumference (2 * radius * 3.14159)
	double a; //circle area (3.14159 * radius * radius)

	cout << "Enter Circle's radius: ";
	cin >> x;
	cout << endl;

	// Print formula and result of the circle's diameter.
	y = 2 * x;
	cout << "Formula: diameter = 2 * radius" << endl;
	cout << "diameter = 2 * " << x << endl;
	cout << "Diameter of the circle is: " << y << endl << endl;


	// Print formula and result for the circle's circumference
	z = 2 * x * 3.14159;
	cout << "Formula: Circumference = 2 * radius * 3.14159" << endl;
	cout << "diameter = 2 * " << x << "*3.14159" << endl;
	cout << "Circumference of the circle is: " << z << endl << endl;

	// Print formula and result of the circle's area.	
	a = 3.14159 * x * x;
	cout << "Formula: Area = 3.14159 * radius^2" << endl;
	cout << "area = 3.14159 * (" << x << " ^ 2)" << endl;
	cout << "Area of the circle is: " << a << endl << endl;
	cout << endl;
	system("pause");
} // end function main