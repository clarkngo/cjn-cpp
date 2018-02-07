// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 4 Control Statements - Part 1
// Exercise: 4:19 Find the Two Largest Numbers (.h)

// Using an approach similar to that in Exercise 4.17, find the two 
// largest values among the 10 numbers. [Note: You must input each number
// only once.]

#pragma once
#include <iostream>
class FindTwoLargest
{
private:
	int _unitsSold;
	int _firstLargest;
	int _secondLargest;
public:
	FindTwoLargest();
	// SETTERS
	void setUnitsSold();
	void setFirstLargest();
	void setSecondLargest();
	// GETTERS
	int getUnitsSold();
	int getFirstLargest();
	int getSecondLargest();
};

