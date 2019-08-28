// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 3 Introduction to Classes, Objects and Strings
// Making a Difference
// Exercise: 3.16 Target-Heart-Rate Calculator (.cpp) 
// While exercising, you can use a heart-rate monitor to see that your heart 
// rate stays within a safe range suggested by your trainers and doctors. According 
// to the American Heart Association (AHA) 
// (www.americanheart.org/presenter.jhtml?identifier=4736), the formula for 
// calculating your maximum heart rate in beats per minute is 220 minus your age 
// in years. Your target heart rate is a range that is 50–85% of your maximum heart 
// rate. [Note: These formulas are estimates provided by the AHA. Maximum and target 
// heart rates may vary based on the health, fitness and gender of the individual. 
// Always consult a physician or qualified health care professional before beginning 
// or modifying an exercise program.] Create a class called HeartRates. The class 
// attributes should include the person’s first name, last name and date of birth 
// (consisting of separate attributes for the month, day and year of birth). Your 
// class should have a constructor that receives this data as parameters. For each 
// attribute provide set and get functions. The class also should include a function 
// getAge that calculates and returns the person’s age (in years), a function 
// getMaxiumumHeartRate that calculates and returns the person’s maximum heart rate 
// and a function getTargetHeartRate that calculates and returns the person’s target 
// heart rate. Since you do not yet know how to obtain the current date from the 
// computer, function getAge should prompt the user to enter the current month, day 
// and year before calculating the person’s age. Write an application that prompts 
// for the person’s information, instantiates an object of class HeartRates and 
// prints the information from that object—including the person’s first name, 
// last name and date of birth—then calculates and prints the person’s age in 
// (years), maximum heart rate and target-heart-rate range


#include "stdafx.h"		// generates precompiled header
#include <iostream>		// allows the program to input and output
#include <string>		// allows the program to use string
#include "HeartRates.h" // includes HeartRates class
using namespace std;	// program uses from the std namespace
						// constructor that has string fname, string lname, int mm, int dd, int yy supplied.
HeartRates::HeartRates(string fname, string lname, int mm, int dd, int yy)
{
	setFirstName(fname);
	setLastName(lname);
	setMonthOfBirth(mm);
	setDayOfBirth(dd);
	setYearOfBirth(yy);
};
// list of setter and getter functions
void HeartRates::setFirstName(string fname) {
	firstName = fname;
}
string HeartRates::getFirstName() {
	return firstName;
}
void HeartRates::setLastName(string lname) {
	lastName = lname;
}
string HeartRates::getLastName() {
	return lastName;
}
void HeartRates::setMonthOfBirth(int mm) {
	monthOfBirth = mm;
}
int HeartRates::getMonthOfBirth() {
	return monthOfBirth;
}
void HeartRates::setDayOfBirth(int dd) {
	dayOfBirth = dd;
}
int HeartRates::getDayOfBirth() {
	return dayOfBirth;
}
void HeartRates::setYearOfBirth(int yy) {
	yearOfBirth = yy;
}
int HeartRates::getYearOfBirth() {
	return yearOfBirth;
}
void HeartRates::setCurrentYear(int currentYear) {
	_currentYear = currentYear;
}
int HeartRates::getCurrentYear() {
	//inputs int value to _current year
	cin >> _currentYear;
	return _currentYear;
}
void HeartRates::setAge(int currYear, int birthYear)
{
	// computes for the age with current year - birth year
	int age = currYear - birthYear;
	_age = age;
}
void HeartRates::setAge(int age)
{
	_age = age;
}
int HeartRates::getAge()
// prompts the user to enter the current year.
{
	cout << "Enter the current year: ";
	cin >> _currentYear;
	setAge(_currentYear, yearOfBirth);
	return _currentYear - yearOfBirth;
}
void HeartRates::setMaximumHeartRate(int maxHR)
{
	// computes for the max limit of heart rate based on age
	_maxHR = 220 - _age;
}
int HeartRates::getMaximumHeartRate()
{
	setMaximumHeartRate(_maxHR);
	return _maxHR;
}
void HeartRates::setTargetHeartRate(int targetHR)
{
	// lowest limit is based on a person's maxmimum heart rate multiplied by 50%.
	_minTarget = .5*_maxHR;
	// highest limit is based on a person's maximum heart rate multiplied by 85%.
	_maxTarget = .85*_maxHR;
}
int HeartRates::getTargetHeartRate()
{
	setTargetHeartRate(_maxHR); // setTargetHeartRate(_maxHR);

								// prints and returns minimum target heart rate and maximum target heart rate
	cout << "Your target heart rate is " << _minTarget << " to " << _maxTarget << endl;
	return 0;
}
