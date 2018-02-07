// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 3 Introduction to Classes, Objects and Strings
// Making a Difference
// Exercise: 3.17 Computerization of Health Records (main.cpp)
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


#include"stdafx.h"			// generates precompiled header	
#include <iostream>			// allows the program to input and output
#include <string>			// allows the program to use string
#include "HealthProfile.h"		// includes HealthProfile class
using namespace std;		// program uses from the std namespace
							// function main begins the program
int main()
{
	string fname, lname, _gender; // string of characters to store firstName, lastName, gender
						 // two-digit integers to store monthOfBirth, dayOfBirth and yearOfBirth
	int mm, dd, yy;
	int _height, _weight;
	// prints a message to enter information
	cout << "Enter your name and date of birth like this, firstname, lastname, gender, month day year: \n";
	// inputs two strings and three integers separated by spaces
	cin >> fname >> lname >> _gender >> mm >> dd >> yy;

	cout << "Enter your height in inches and weight in pounds: \n";
	cin >> _height >> _weight;

	// create a HeartRates object named person1
	HealthProfile person1(fname, lname, _gender, mm, dd, yy, _height, _weight);
	// calls monthOfBirth, dayOfBirth and yearOfBirth functions
	cout << "Your name is " << person1.getFirstName() << " " << person1.getLastName() << "." << endl <<
		"Your birthday is " << person1.getMonthOfBirth() << "/" << person1.getDayOfBirth() <<
		"/" << person1.getYearOfBirth() << endl;
	cout << "Your gender is: " << person1.getGender() << endl;

	// calls age function
	cout << "Your age is " << person1.getAge() << " years!" << endl;
	// calls maximumHeartRate function
	cout << "Your maximum heart rate is " << person1.getMaximumHeartRate() << endl;
	// calls targetHeartRate function
	person1.getTargetHeartRate();

	person1.displayBMI();

	system("pause");	// allows the system to pause
	return 0;	    	// exit code of the program
} // end main
