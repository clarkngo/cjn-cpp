// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 3 Introduction to Classes, Objects and Strings
// Making a Difference
// Exercise: 3.16 Target-Heart-Rate Calculator (main.cpp) 
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


#include"stdafx.h"			// generates precompiled header	
#include <iostream>			// allows the program to input and output
#include <string>			// allows the program to use string
#include "HeartRates.h"		// includes HeartRates class
using namespace std;		// program uses from the std namespace
							// function main begins the program
int main()
{
	string fname, lname; // string of characters to store firstName and lastName
						 // two-digit integers to store monthOfBirth, dayOfBirth and yearOfBirth
	int mm, dd, yy;
	// prints a message to enter information
	cout << "Enter your name and date of birth like this, firstname lastname month day year: ";
	// inputs two strings and three integers separated by spaces
	cin >> fname >> lname >> mm >> dd >> yy;
	// create a HeartRates object named person1
	HeartRates person1(fname, lname, mm, dd, yy);
	// calls monthOfBirth, dayOfBirth and yearOfBirth functions
	cout << "Your name is " << person1.getFirstName() << " " << person1.getLastName() <<
		". Your birthday is " << person1.getMonthOfBirth() << "/" << person1.getDayOfBirth() <<
		"/" << person1.getYearOfBirth() << endl;
	// calls age function
	cout << "Your age is " << person1.getAge() << " years!" << endl;
	// calls maximumHeartRate function
	cout << "Your maximum heart rate is " << person1.getMaximumHeartRate() << endl;
	// calls targetHeartRate function
	person1.getTargetHeartRate();
	system("pause");	// allows the system to pause
	return 0;	    	// exit code of the program
} // end main
