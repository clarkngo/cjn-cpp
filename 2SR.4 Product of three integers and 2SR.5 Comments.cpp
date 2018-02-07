// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 2 Introduction to C++ Programming
// Self-review: 2.4 and 2.5
// Write a statement (or comment) to accomplish each of the following
// (assume using diretives have been used for cin, cout and endl):
// a) State that a program calculates the product of three integers.
// b) Declare the variables x, y, z and result to be of type int (in separate statements).
// c) Prompt the user to enter three integer.
// d) Read the three integers from the keyboard and store them in the variables x, y and z.
// e) PCompute the product of three integers contained in variables x, y and z, and
//		assign the result to the variable result.
// f) Print "Thee product is " followed by the value of the variable result.
// g) Return a value from a main indicating that the program terminated successfully.


#include "stdafx.h"
#include <iostream> // allows program to output data to the screen

using std::cout; // program uses cout
using std::cin; // program uses cin
using std::endl; // program uses endl

// function main begins program execution
int main()
{
	// b) declaration of variables
	int x;
	int y;
	int z;
	int result;

	// c) prompt message
	cout << "Enter three integers: ";
	// d) read from keyboard three integers
	cin >> x >> y >> z;
	// e) product of three integers
	result = x * y * z;
	// f) print message and integer result 
	cout << "The product is " << result;
	cout << endl;
	system("pause");
	// g) indicates program terminates succesfully.
	return 0;
} // end function main