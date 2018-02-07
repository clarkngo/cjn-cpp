// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 3 Introduction to Classes, Objects and Strings
// Making a Difference
// Exercise: 3.17 Computerization of Health Records (.cpp)
// A health care issue that has been in the news lately is the computerization of
// health records. This possibility is being approached cautiously because of 
// sensitive privacy and security concerns, among others. [We address such concerns
// in later exercises.] Computerizing health records could make it easier for patients
// to share their health profiles and histories among their various health care
// professionals. This could improve the quality of health care, help avoid drug
// conflicts and erroneous drug prescriptions, reduce costs and in emergencies,
// could save lives. In this exercise, you'll design a "starter" HealthProfile class
// for a person. The class attributes for the month, day and year of birth), height
// (in inches) and weight (in pounds). Your class should have a constructor that
// receives this data. For each attribute, provide set and get functions. The class
// also should include functions that calculate and return the user's age in year,
// maxmimum heart rate and target-heart-rage range (see Exercise 3.16), and body
// mass index (BMI; see Exercise 2.30). Write an application that prompts for the
// person's information, instantiates an object of class HealthProfile for that
// person and prints the information from the object - including the person's
// first name, last name, gender, date of birth, height and weight - then calculates
// and prints the person's age in years, BMI, maximum heart rate and target-heart-
// rate range. It should also display the "BMI values" chart from Exercise 2.30.
// Use the same technique as Exercise 3.16 to calculate the person's age.s


#include "stdafx.h"		// generates precompiled header
#include <iostream>		// allows the program to input and output
#include <string>		// allows the program to use string
#include "HealthProfile.h" // includes HealthProfile class
using namespace std;	// program uses from the std namespace
						// constructor that has string fname, string lname, string gender, int mm, int dd, int yy supplied.
HealthProfile::HealthProfile(string fname, string lname, string gender, int mm, int dd, int yy, int height, int weight)
{
	setFirstName(fname);
	setLastName(lname);
	setGender(gender);
	setMonthOfBirth(mm);
	setDayOfBirth(dd);
	setYearOfBirth(yy);
	setHeight(height);
	setWeight(weight);
};
// list of setter and getter functions
void HealthProfile::setFirstName(string fname) {
	firstName = fname;
}
string HealthProfile::getFirstName() {
	return firstName;
}
void HealthProfile::setLastName(string lname) {
	lastName = lname;
}
string HealthProfile::getLastName() {
	return lastName;
}

void HealthProfile::setGender(string gender) {
	_gender = gender;
}
string HealthProfile::getGender() {
	return _gender;
}
void HealthProfile::setMonthOfBirth(int mm) {
	monthOfBirth = mm;
}
int HealthProfile::getMonthOfBirth() {
	return monthOfBirth;
}
void HealthProfile::setDayOfBirth(int dd) {
	dayOfBirth = dd;
}
int HealthProfile::getDayOfBirth() {
	return dayOfBirth;
}
void HealthProfile::setYearOfBirth(int yy) {
	yearOfBirth = yy;
}
int HealthProfile::getYearOfBirth() {
	return yearOfBirth;
}
void HealthProfile::setCurrentYear(int currentYear) {
	_currentYear = currentYear;
}
int HealthProfile::getCurrentYear() {
	//inputs int value to _current year
	cin >> _currentYear;
	return _currentYear;
}
void HealthProfile::setAge(int currYear, int birthYear)
{
	// computes for the age with current year - birth year
	int age = currYear - birthYear;
	_age = age;
}
void HealthProfile::setAge(int age)
{
	_age = age;
}
int HealthProfile::getAge()
// prompts the user to enter the current year.
{
	cout << "Enter the current year: ";
	cin >> _currentYear;
	setAge(_currentYear, yearOfBirth);
	return _currentYear - yearOfBirth;
}
void HealthProfile::setMaximumHeartRate(int maxHR)
{
	// computes for the max limit of heart rate based on age
	_maxHR = 220 - _age;
}
int HealthProfile::getMaximumHeartRate()
{
	setMaximumHeartRate(_maxHR);
	return _maxHR;
}
void HealthProfile::setTargetHeartRate(int targetHR)
{
	// lowest limit is based on a person's maxmimum heart rate multiplied by 50%.
	_minTarget = .5*_maxHR;
	// highest limit is based on a person's maximum heart rate multiplied by 85%.
	_maxTarget = .85*_maxHR;
}
int HealthProfile::getTargetHeartRate()
{
	setTargetHeartRate(_maxHR); // setTargetHeartRate(_maxHR);

								// prints and returns minimum target heart rate and maximum target heart rate
	cout << "Your target heart rate is " << _minTarget << " to " << _maxTarget << endl;
	return 0;
}

void HealthProfile::setHeight(int height)
{
	_height = height;
}

int HealthProfile::getHeight()
{
	return _height;
}

void HealthProfile::setWeight(int weight)
{
	_weight = weight;
}

int HealthProfile::getWeight()
{
	return _weight;
}


void HealthProfile::displayBMI()
{
	int bmi;
//calculates and displays the user's body mass index
bmi = ((_weight * 703) / (_height * _height)); // BMI formula
cout << "Your BMI value is: " << bmi << endl;

	//evaluate BMI
	if (bmi < 18.5) {
		cout << "You are Underweight.";
	}
	if (bmi >= 18.5 && bmi < 25) {
		cout << "You are Normal.";
	}
	if (bmi >= 25 && bmi < 30) {
		cout << "You are Overweight.";
	}
	if (bmi >= 30) {
		cout << "You are Obese.";
	}
	cout << endl;

}