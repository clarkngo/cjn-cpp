// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 4 Control Statements - Part 1
// Exercise: 4.27 Decimal to Binary

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int number;
	cout << "Enter two-digit integer: ";
	cin >> number;

	int binary1 = number;
	int binary2 = 0;
	int binary3 = 0;
	int binary4 = 0;
	int binary5 = 0;
	int binary6 = 0;
	int binary7 = 0;
	int counter = 0;

	while (binary1 > 1)
	{
		binary1 = binary1 -2;
		counter++;
	}

	binary2 = counter;
	counter = 0;
	while (binary2 > 1)
	{
		binary2 -= 2;
		counter++;
	}

	binary3 = counter;
	counter = 0;
	while (binary3 > 1)
	{
		binary3 -= 2;
		counter++;
	}

	binary4 = counter;
	counter = 0;
	while (binary4 > 1)
	{
		binary4 -= 2;
		counter++;
	}
	binary5 = counter;
	counter = 0;
	while (binary5 > 1)
	{
		binary5 -= 2;
		counter++;
	}
	binary6 = counter;
	counter = 0;
	while (binary6 > 1)
	{
		binary6 -= 2;
		counter++;
	}
	binary7 = counter;
	counter = 0;
	while (binary7 > 1)
	{
		binary7 -= 2;
		counter++;
	}
	cout << "Binary number: ";
	cout << binary7 << binary6 << binary5 << binary4 << binary3 << binary2 << binary1;
	cout << endl;
	system("pause");	// allows the system to pause
	return 0;	    	// exit code of the program
} // end main
