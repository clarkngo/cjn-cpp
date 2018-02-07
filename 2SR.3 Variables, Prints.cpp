// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 2 Introduction to C++ Programming
// Self-review: 2.3
// Write a single statement to accomplish each of the 
// following (assume that using directives have not been used):
// a) Declare the variables c, thisIsAVariable, q76354 and number to be of type int.
// b) Prompt the user to enter an integer. End your prompting message with a colon (:)
//		followed by a space and leave the cursor positioned after the space.
// c) Read an integer from the user at the keyboard and store it in integer variable age.
// d)  If the variable is not equal to 7, print "The variable number is not equal to 7".
// e) Print the message "This is a C++ program" on one line.
// f) Print the message "This is a C++ program" on two lines. End the first line with C++.
// g) Print the message "This is a C++ program" with each word on a separate line.
// h) Print the message "This is a C++ program". Separate each word the next by a tab.

#include "stdafx.h"
#include <iostream> // allows program to output data to the screen


// function main begins program execution
int main()
{
	// a)
	int c;
	int thisIsVariable;
	int q76354;
	int number;

	// b)
	std:: cout << "Enter an integer: ";
	// c)
	int age;
	std::cin >> age;
	// d)
	if (age != 7)
		std::cout << "The variable number is not equal to 7." << std::endl;
	// e)
	std::cout << "This is a C++ program" << std::endl;
	// f)
	std::cout << "This is a C++\nprogram" << std::endl;
	// g)
	std::cout << "This\nis\na\nC++\nprogram" << std::endl;
	// h)
	std::cout << "This\tis\ta\tC++\tprogram" << std::endl;

	system("pause");
	return 0;
} // end function main