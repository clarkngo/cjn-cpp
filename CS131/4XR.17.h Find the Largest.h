// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 4 Control Statements - Part 1
// Exercise: 4:17 Find the Largest (.h)

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

#pragma once
#include <iostream>
class FindLargest
{
private:
	int _unitsSold;
	int _largest;
public:
	FindLargest();
	// SETTERS
	void setUnitsSold();
	void setLargest();
	// GETTERS
	int getUnitsSold();
	int getLargest();
};

