// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 2 Introduction to C++ Programming
// Exercise: 2.26 Checkboard Pattern
// Display the following checkerboard pattern with eight output statements,
// then display the same pattern using as few statemetns as possible.

//* * * * * * * * *
// * * * * * * * * *
//* * * * * * * * *
// * * * * * * * * *
//* * * * * * * * *
// * * * * * * * * *
//* * * * * * * * *
// * * * * * * * * *


#include "stdafx.h"
#include <iostream> // allows program to output data to the screen

using std::cout; // program uses cout
using std::cin; // program uses cin
using std::endl; // program uses endl

int main()
{
	cout << "* * * * * * * *" << endl;
	cout << " * * * * * * * *" << endl;
	cout << "* * * * * * * *" << endl;
	cout << " * * * * * * * *" << endl;
	cout << "* * * * * * * *" << endl;
	cout << " * * * * * * * *" << endl;
	cout << "* * * * * * * *" << endl;
	cout << " * * * * * * * *" << endl;

	cout << endl;
	system("pause");
} // end function main