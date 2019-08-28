// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 4 Control Statements - Part 1
// Exercise: 4.25 Square of Asterisks

// Write a program that reads in the size of the side of a square
// then prints a hollow square of that size out of asterisks and
// blanks. Your program should work for squares of all side sizes
// between 1 and 20. For example, if your reads a size of 5, it
// should print


#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;		
int main()
{
	int square;
	int counterIn1 = 0;
	int counterIn2 = 0;
	int counterIn3 = 0;
	int counterOut = 0;
	cout << "Enter the side of a square: ";
	cin >> square;
	while (counterOut != square)
	{
		while (counterIn1 != square)
		{
			cout << "*";
			++counterIn1;
		} // end inner 1
		cout << endl;
			while (counterIn2 != square)
			{
				cout << "*" << setw(square -1) << "*";
				++counterIn2;
				cout << endl;
			} // end inner 2
				while (counterIn3 != square)
				{
					cout << "*";
					++counterIn3;
				} // end inner 3
		++counterOut;
	} // end outer
	cout << endl;

	system("pause");	// allows the system to pause
	return 0;	    	// exit code of the program
} // end main
