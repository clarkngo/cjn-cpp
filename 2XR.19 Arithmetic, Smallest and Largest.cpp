// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 2 Introduction to C++ Programming
// Exercise: 2.19 Arithmetic, Smallest and Largest
// Write a program that inputs three integers from the keyborad and prints the
// sum, average, product, smallest, largest of these numbers. The screen dialog
// should appear as follows:
// Input three different integers: 13 27 14
// Sum is 54
// Average is 18
// Product is 4914
// Smallest is 13
// Largest is 27

#include "stdafx.h"
#include <iostream> // allows program to output data to the screen

using std::cout; // program uses cout
using std::cin; // program uses cin
using std::endl; // program uses endl

int main()
{
	int x, y, z;
	cout << "Enter three integers: ";
	cin >> x >> y >> z;

	cout << "The sum is " << x + y  + z<< endl;
	cout << "The product is " << x * y * z<< endl;

	if (x > y && y > z)
	{
		cout << "Smallest is " << z << endl;
		cout << "Largest is " << x << endl;
	}
	else if (x > z && z > y)
	{
		cout << "Smallest is " << y << endl;
		cout << "Largest is " << x << endl;
	}
	else if (y > x && x > z)
	{
		cout << "Smallest is " << z << endl;
		cout << "Largest is " << y << endl;
	}
	else if (y > z && z > x)
	{
		cout << "Smallest is " << x << endl;
		cout << "Largest is " << y << endl;
	}
	else if (z > y && y > x)
	{
		cout << "Smallest is " << x << endl;
		cout << "Largest is " << z << endl;
	}
	else  // (z > x && x > y)
	{
		cout << "Smallest is " << y << endl;
		cout << "Largest is " << z << endl;
	}

	cout << endl;
	system("pause");
} // end function main