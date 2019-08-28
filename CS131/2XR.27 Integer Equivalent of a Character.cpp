// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 2 Introduction to C++ Programming
// Exercise: 2.27 Integer Equivalent of a Character
// Here is a peek ahead. In this chapter you learned about integers and the type int. C++ can also
// represent uppercase letters, lowercase letters and a considerable variety of special symbols. C++ 
// uses small integers internally to represent each different character. The set of characters a computer 
// uses and the corresponding integer representations for those characters are called the computer's
// character set. You can print a character by enclosing that character in single quotes, as with
//		cout << 'A'; // print an uppercase A
// You can print the integer equivalent of a character using static_cast as follows:
//		cout << static_cast< int >(' A' ); // print 'A' as an integer
// This is called a cast operation (we formally introduce casts in Chapter 4). When the preceding
// statement executes, it prints the value 65 (on systems that use the ASCII character set). Write a
// program that prints the integer equivalent of a character typed at the keyboard. Store the input in a
// variable of type char. Test your program several times using uppercase letters, lowercase letters, 
// digits and special characters (like $).

#include "stdafx.h"
#include <iostream> // allows program to output data to the screen

using std::cout; // program uses cout
using std::cin; // program uses cin
using std::endl; // program uses endl

int main()
{
	cout << 'A'; //print an uppercase A
	cout << endl;
	cout << static_cast<int>('A'); //print 'A' as an integer
	cout << endl;
	cout << '$';
	cout << endl;
	cout << static_cast<int>('$');
	cout << endl;
	system("pause");
} // end function main