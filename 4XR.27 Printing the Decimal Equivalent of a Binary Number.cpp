// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 4 Control Statements - Part 1
// Exercise: 4.27 Printing the Decimal Equivalent of a Binary Number

// Input an integer containing only 0s and 1s (i.e., a "binary"
// integer) and print its decimal equivalent. Use the modlus and
// division operators to pick off the "binary" number's digits one
// at a time from right to left. Much as in the decimal number 
// system, where the rightmost digit has a positional value of 1
// the next left digit has a positional value of 10, then 100, then
// 1000, and so on, in the binary number system the rightmost digit
// has a positional value of 1, the next digit keft has a positional 
// value of 2, then 4, then 8 and son on. Thus the decimal number 234
// can be interpreted as 2 * 100 + 3 * 10 + 4 * 1. The decimal equivalent
// of binary 1101 is 1 * 1 + 0 * 2 + 1 * 4 + 1 * 8, or 1 + 0 + 4 + 8,
// or 13. [Note: To learn more about binary numbers, refer to Appendix D.]

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int binary;
	cout << "Enter seven-digit binary: ";
	cin >> binary;

	int binary1 = binary % 10;
	int binary2 = binary % 100 / 10;
	int binary3 = binary % 1000 / 100;
	int binary4 = binary % 10000 / 1000;
	int binary5 = binary % 100000 / 10000;
	int binary6 = binary % 1000000 / 100000;
	int binary7 = binary % 10000000 / 1000000;
	
	int decimalNumber;
	decimalNumber = binary1 * 1 + binary2 * 2 + binary3 * 4 + binary4 * 8
		+ binary5 * 16 + binary6 * 32 + binary7 * 64;
	cout << "Decimal number: " << decimalNumber;
	cout << endl;
	system("pause");	// allows the system to pause
	return 0;	    	// exit code of the program
} // end main
