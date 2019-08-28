// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 2 Introduction to C++ Programming
// Exercise: 2.21 Displaying Shapes with Asterisks
// Write a program that prints a box, an oval, an arrow and a diamond as follows:
//*********    ***      *        *
//*       *  *   *     ***      * *
//*       *  *     *  *****    *   *
//*       *  *     *    *     *     *
//*       *  *     *    *    *       *
//*       *  *     *    *     *     *
//*       *  *     *    *      *   *
//*       *   *   *     *       * *
//*********    ***      *        *


#include "stdafx.h"
#include <iostream> // allows program to output data to the screen

using std::cout; // program uses cout
using std::cin; // program uses cin
using std::endl; // program uses endl

int main()
{
	cout << "*********\t  ***  \t  *  \t    *" << endl;
	cout << "*       *\t *   * \t *** \t   * *" << endl;
	cout << "*       *\t*     *\t*****\t  *   *" << endl;
	cout << "*       *\t*     *\t  *  \t *     *" << endl;
	cout << "*       *\t*     *\t  *  \t*       *" << endl;
	cout << "*       *\t*     *\t  *  \t *     *" << endl;
	cout << "*       *\t*     *\t  *  \t  *   *" << endl;
	cout << "*       *\t *   * \t  *  \t   * *" << endl;
	cout << "*********\t  ***  \t  *  \t    *" << endl;

	cout << endl;
	system("pause");
} // end function main