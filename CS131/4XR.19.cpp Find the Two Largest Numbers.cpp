// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 4 Control Statements - Part 1
// Exercise: 4:19 Find the Two Largest Numbers (.cpp)

// Using an approach similar to that in Exercise 4.17, find the two 
// largest values among the 10 numbers. [Note: You must input each number
// only once.]

#include "stdafx.h"
#include <iostream>
#include <iomanip> // parameterized stream manipulators
#include "FindTwoLargest.h"
using namespace std;

FindTwoLargest::FindTwoLargest() {}

// SETTERS

void FindTwoLargest::setUnitsSold()
{
	int unitsSold;
	cin >> unitsSold;
	_unitsSold = unitsSold;
}

void FindTwoLargest::setFirstLargest()
{
	if (_unitsSold > _firstLargest)
		_firstLargest = _unitsSold;
}

void FindTwoLargest::setSecondLargest()
{

	if (_secondLargest < _unitsSold && _secondLargest < _firstLargest)
		if (_firstLargest > _unitsSold)
			_secondLargest = _unitsSold;
		else if (_unitsSold > _firstLargest)
			_secondLargest = _firstLargest;
}

// GETTERS
int FindTwoLargest::getUnitsSold()
{
	return _unitsSold;
}

int FindTwoLargest::getFirstLargest()
{
	return _firstLargest;
}

int FindTwoLargest::getSecondLargest()
{
	return _secondLargest;
}