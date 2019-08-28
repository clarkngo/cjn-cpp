// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 3 Introduction to Classes, Objects and Strings
// Exercise: 3.15 Date Class (.cpp)
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
#include "Date.h" // Employee class definition
using namespace std; // program uses from the std namespace
					 // constructor for Employee class


Date::Date(int month, int day, int year)
{
	setMonth(month);
	setDay(day);
	setYear(year);
}

// set to 1 if less than 1 or more than 12.
void Date::setMonth(int month)
{
	if (month > 12 || month < 1)
		month = 1;
	_month = month;
}
int Date::getMonth()
{
	return _month;
}
void Date::setDay(int day)
{
	_day = day;
}
int Date::getDay()
{
	return _day;
} 
void Date::setYear(int year)
{
	_year = year;
}
int Date::getYear()
{
	return _year;
}

void Date::displayDate()
{
	cout << _month << "/" << _day << "/" << _year << endl;
}