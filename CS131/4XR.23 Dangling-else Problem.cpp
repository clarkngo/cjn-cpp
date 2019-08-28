// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 4 Control Statements - Part 1
// Exercise: 4.23 Dangling-else Problem

// State the output for each of the following when x is 9 and
// y is 11 and when x is 11 and y is 9. The compiler ignores
// the indentation in a C++ program. The C++ compiler always
// associates an else with the previous if unless told to do
// otherwise by the placement of braces {}. On first glance.
// you may not be sure which if and else match, so this is
// referred to as the "dangling-else" problem. We eliminated
// the indentation from the following code to make the problem
// more challenging. [Hint: Apply indentation conventions 
// you've learned.]

// x = 9, y =11;
// x = 11, y = 9;
// a)	if ( x < 10 )
//		if ( y > 10 )
//		cout << "*****" << endl;
//		else
//		cout << "#####" << endl;
//		cout << "$$$$$" << endl;

// x = 9, y =11;
// x = 11, y = 9;
// b)	if ( x < 10 )
//		{
//		if ( y > 10 )
//		cout << "*****" << endl;
//		}
//		else
//		{
//		cout << "#####" << endl;
//		cout << "$$$$$" << endl;
//		}


#include "stdafx.h"
#include <iostream>
using namespace std;		
int main()
{
	//// a.1) 
	//int x = 9, y =11;
	//if ( x < 10 )
	//	if ( y > 10 )
	//		cout << "*****" << endl;
	//	else
	//		cout << "#####" << endl;
	//cout << "$$$$$" << endl;

	//cout << endl << endl << endl;

	//// a.2) 
	//int x = 11, y = 9;
	//if (x < 10)
	//	if (y > 10)
	//		cout << "*****" << endl;
	//	else
	//		cout << "#####" << endl;
	//cout << "$$$$$" << endl;

	//cout << endl << endl << endl;


	//// b.1) 
	//int x = 9, y = 11;
	//if (x < 10)
	//{
	//	if (y > 10)
	//		cout << "*****" << endl;
	//}
	//else
	//{
	//	cout << "#####" << endl;
	//	cout << "$$$$$" << endl;
	//}

	//cout << endl << endl << endl;

	//// b.2) 
	//int x = 11, y = 9;
	//if (x < 10)
	//{
	//	if (y > 10)
	//		cout << "*****" << endl;
	//}
	//else
	//{
	//	cout << "#####" << endl;
	//	cout << "$$$$$" << endl;
	//}

	//cout << endl << endl << endl;

	system("pause");	// allows the system to pause
	return 0;	    	// exit code of the program
} // end main
