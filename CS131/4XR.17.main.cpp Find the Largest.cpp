// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 4 Control Statements - Part 1
// Exercise: 4:17 Find the Largest (main.cpp)

// The process of finding the largest number (i.e., the maximum of a group of numbers
// is used frequently in computer applications. For example, a program that determines
// the winner of a sales contest inputs the number of units sold by each sales person.
// The salesperson who sells the most units wins the contest. Write a C++ program that
// uses a while statement to determine and print the largest of 10 numbers input by the
// user. Your program should use three variables, as follows:

// counter:	A counter to counter to 10 (i.e., to keep track of how many numbers have
//			been input and to determine when all 10 numbers have been processed).
// number:	The current number input to the program.
// largest:	The largest number found so far.


#include "stdafx.h"
#include <iostream>
#include "FindLargest.h"
using namespace std;		// program uses from the std namespace
							// function main begins the program
int main()
{
	FindLargest findLargest;
	int counter = 1;
	while (counter <= 10)
	{
		cout << "Enter units sold for sales person " << counter << " : ";
		findLargest.setUnitsSold();
		findLargest.getUnitsSold();
		findLargest.setLargest();
		cout << "Largest units sold so far: " << findLargest.getLargest();
		cout << endl << endl;
		counter += 1;
	}
	system("pause");	// allows the system to pause
	return 0;	    	// exit code of the program
} // end main
