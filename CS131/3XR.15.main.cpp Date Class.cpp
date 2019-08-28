// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 3 Introduction to Classes, Objects and Strings
// Exercise: 3.15 Date Class (main.cpp)
// Create a class called Date that includes three pieces of information as
// data members - a month (type int), a day (type int) and a year (type int).
// Your class should have a constructor with three parameters that uses the three
// parameters to initialize the three data members.  For the purpose of this 
// exercise, assume that the values provided for the year and day are correct, 
// but ensure that the month value is in the range 1-12; if it isn't set the month 
// to 1. Provide a set and get function for each data member. Provide a member 
// function displayDate that displays the month, day and year separated by forward 
// slashes(/). Write a test program that demonstrates class Date's capabilities.

#include "stdafx.h"
#include <iostream>
#include "Date.h"
int main()
{
	Date date1(14, 25, 2000);
	Date date2(2, 3, 2005);

	cout << "mm/dd/yyyy" << endl;

	date1.displayDate();
	date2.displayDate();

	system("pause");
	return 0;
}
