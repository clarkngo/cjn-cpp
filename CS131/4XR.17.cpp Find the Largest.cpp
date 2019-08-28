// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 4 Control Statements - Part 1
// Exercise: 4:17 Find the Largest (.cpp)

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
#include <iomanip> // parameterized stream manipulators
#include "FindLargest.h"
using namespace std;

FindLargest::FindLargest() {}

// SETTERS

void FindLargest::setUnitsSold()
{
	int unitsSold;
	cin >> unitsSold;
	_unitsSold = unitsSold;
}

void FindLargest::setLargest()
{
	if (_unitsSold > _largest)
		 _largest =_unitsSold;
}

// GETTERS
int FindLargest::getUnitsSold()
{
	return _unitsSold;
}

int FindLargest::getLargest()
{
	return _largest;
}