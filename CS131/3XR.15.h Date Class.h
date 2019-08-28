// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 3 Introduction to Classes, Objects and Strings
// Exercise: 3.15 Date Class (.h)
// Create a class called Date that includes three pieces of information as
// data members - a month (type int), a day (type int) and a year (type int).
// Your class should have a constructor with three parameters that uses the three
// parameters to initialize the three data members.  For the purpose of this 
// exercise, assume that the values provided for the year and day are correct, 
// but ensure that the month value is in the range 1-12; if it isn't set the month 
// to 1. Provide a set and get function for each data member. Provide a member 
// function displayDate that displays the month, day and year separated by forward 
// slashes(/). Write a test program that demonstrates class Date's capabilities.


#include <string> // allows program to input string
using namespace std; // program uses from the std namespace
class Date //class
{	
public:
	Date(int month, int day, int year);
	void setMonth(int month);
	int getMonth();
	void setDay(int day);
	int getDay();
	void setYear(int year);
	int getYear();
	void displayDate();
	// variables not accessible to outside of the class object
private:
	int _month;
	int _day;
	int _year;
};
