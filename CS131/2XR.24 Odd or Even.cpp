// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 2 Introduction to C++ Programming
// Exercise: 2.24 Odd or Even
// Write a program that reads an integer and determines and prints whether 
// it's odd or even. [Hint: use the modulus operator. An even number is a multiple of two.
// Any multiple of two leaves a remainder of zero when divided by 2.]
#include "stdafx.h"
#include <iostream> // allows program to output data to the screen

using std::cout; // program uses cout
using std::cin; // program uses cin
using std::endl; // program uses endl

int main()
{
	int x, y;
	cout << "Enter a number: ";
	cin >> x;
	y = x % 2;
	if (y == 1)
		cout << "Odd number" << endl;
	if (y == 0)
		cout << "Even number" << endl;

	cout << endl;
	system("pause");
} // end function main