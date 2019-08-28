// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 4 Control Statements - Part 1
// Exercise: 4.26 Palindromes

// A palindrome is anumber or a text phrase tha reads the same
// backward as forward. For example, each of the following five-
// digit integers is a palindrome: 12321, 55555, 45554 and 11611.
// Write a program that reads in a five-digit integer and determines
// whether it's a palindrom. [Hint: Use the division and modulus
// operators to separate the number into its individual digits.]

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;		
int main()
{
	int palindrome;
	int digit1;
	int digit2;
	int digit4;
	int digit5;
	cout << "Enter five-digit integer: ";
	cin >> palindrome;
	digit1 = palindrome / 10000;
	digit2 = palindrome % 10000 / 1000;
	digit4 = palindrome % 100 / 10;
	digit5 = palindrome % 10;
	if (digit1 == digit5 && digit1 == digit5)
		cout << "Five-digit integer is a palindrome. =)";
	else
		cout << "Five-digit integer is not a palindrome. =(";
	cout << endl;
	system("pause");	// allows the system to pause
	return 0;	    	// exit code of the program
} // end main
