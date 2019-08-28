// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 3 Introduction to Classes, Objects and Strings
// Making a Difference
// Exercise: 3.17 Computerization of Health Records (.h)
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


#pragma once	  // non-standard preprocessor directive
#include <string> // program uses C++ standard string class 
using namespace std; // program uses from the std namespace
class HealthProfile	// HealthProfile class definition
{
public: //variables accessible to outside of the class object
	HealthProfile(string fname, string lname, string gender, int mm, int dd, int yy,
		int height, int weight);
	HealthProfile(string fname, string lname, string gender, int mm, int dd, int yy, 
		int age, int currentYear, int maxHR, int targetHR, int height, int weight);
	void setFirstName(string fname);				// function that sets the first name
	string getFirstName();							// function that gets the first name
	void setLastName(string lname);					// function that sets the last name
	string getLastName();                           // function that gets the last name
	void setGender(string gender);					// function that sets the gender
	string getGender();							    // function that gets the gender
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
	void setHeight(int height);
	int getHeight();
	void setWeight(int weight);
	int getWeight();
	void displayBMI();

private: // variables not accessible to outside of the class object.
	string firstName;
	string lastName;
	string _gender;
	int monthOfBirth;
	int dayOfBirth;
	int yearOfBirth;
	int _currentYear;
	int _age;
	int _maxHR;
	int targetHeartRate;
	int _minTarget;
	int _maxTarget;
	int _height;
	int _weight;
}; // end of HealthProfile class
