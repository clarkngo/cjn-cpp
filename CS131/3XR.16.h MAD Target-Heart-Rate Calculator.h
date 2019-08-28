// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 3 Introduction to Classes, Objects and Strings
// Making a Difference
// Exercise: 3.16 Target-Heart-Rate Calculator (.h) 
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

#pragma once	  // non-standard preprocessor directive
#include <string> // program uses C++ standard string class 
using namespace std; // program uses from the std namespace
class HeartRates	// HeartRates class definition
{
public: //variables accessible to outside of the class object
	HeartRates(string fname, string lname, int mm, int dd, int yy);
	HeartRates(string fname, string lname, int mm, int dd, int yy, int age, int currentYear, int maxHR, int targetHR);
	void setFirstName(string fname);				// function that sets the first name
	string getFirstName();							// function that gets the first name
	void setLastName(string lname);					// function that sets the last name
	string getLastName();                           // function that gets the last name
	void setMonthOfBirth(int mm);                   // function that sets the month of birth
	int getMonthOfBirth();							// function that gets the month of birth
	void setDayOfBirth(int dd);                     // function that sets the day of birth
	int getDayOfBirth();				            // function that gets the month of birth
	void setYearOfBirth(int yy);                    // function that sets the month of birth
	int getYearOfBirth();                           // function that gets the month of birth
	void setCurrentYear(int currentYear);           // function that sets the month of birth
	int getCurrentYear();							// function that gets the current year
	void setAge(int currYear, int birthYear);		// function that sets the age
	void setAge(int age);                           // function that sets the age
	int getAge();                                   // function that gets the age
	void setMaximumHeartRate(int maxHR);            // function that sets the maximum heart rate
	int getMaximumHeartRate();                      // function that gets the maximum heart rate
	void setTargetHeartRate(int targetHR);          // function that sets the target heart rate
	int getTargetHeartRate();                       // function that gets the target heart rate

private: // variables not accessible to outside of the class object.
	string firstName;
	string lastName;
	int monthOfBirth;
	int dayOfBirth;
	int yearOfBirth;
	int _currentYear;
	int _age;
	int _maxHR;
	int targetHeartRate;
	int _minTarget;
	int _maxTarget;
}; // end of HeartRates class
