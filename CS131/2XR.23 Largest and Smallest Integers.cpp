// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 2 Introduction to C++ Programming
// Exercise: 2.23 2.23 Largest and smallest Integers
// 5 integers, determine the largest and smallest integers and prints.
#include "stdafx.h"
#include <iostream> // allows program to output data to the screen

using std::cout; // program uses cout
using std::cin; // program uses cin
using std::endl; // program uses endl

int main()
{
	int a, b, x, y, z;
	cout << "Enter 5 integers: " << endl;
	cin >> x >> y >> z >> a >> b;
	if (x < y && x < z && x < a && x < b)
		cout << "Smallest number is: " << x << endl;
	if (x > y && x > z && x > a && x > b)
		cout << "Largest number is: " << x << endl;
	if (y < x && y < z && y < a && y < b)
		cout << "Smallest number is: " << y << endl;
	if (y > x && y > z && y > a && y > b)
		cout << "Largest number is: " << y << endl;
	if (z < y && z < x && z < a && z < b)
		cout << "Smallest number is: " << z << endl;
	if (z > y && z > x && z > a && z > b)
		cout << "Largest number is: " << z << endl;
	if (a < y && a < z && a < x && a < b)
		cout << "Smallest number is: " << a << endl;
	if (a > y && a > z && a > x && a > b)
		cout << "Largest number is: " << a << endl;
	if (b < y && b < z && b < a && b < x)
		cout << "Smallest number is: " << b << endl;
	if (b > y && b > z && b > a && b > x)
		cout << "Largest number is: " << b << endl;

	cout << endl;
	system("pause");
} // end function main