// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 2 Introduction to C++ Programming
// Making a Difference
// Exercise: 2.31 Car-Pool Savings Calculator
// Research several car-pooling websites. Create an application that calculates your daily
// driving cost, so that you can estimate how much money could be saved by car pooling,
// which also has other advantages such as reducing carbon emissions and reducing traffic
// congestion. The application should input the following information and display the user's
// cost per day pf driving to work:

// a)	Total miles driven per day.
// b)	Cost per gallon of gasoline.
// c)	Average miles per gallon.
// d)	Parking fees per day.
// e)	Tolls per day.

#include "stdafx.h" // generates precompiled header
#include <iostream> // allows program to output data to the screen
using namespace std;

int main()
{
	int x, y, z, a, b, c;
	cout << "Total miles per day: ";
	cin >> x;
	cout << "Cost per gallon of gasoline: ";
	cin >> y;
	cout << "Average miles per gallon: ";
	cin >> z;
	cout << "Parking fees per day: ";
	cin >> a;
	cout << "Tolls per day: ";
	cin >> b;
	c = x / z * y + a + b;
	cout << "Cost of day of driving to work: " << c << endl;

	cout << endl;
	system("pause");
} // end function main