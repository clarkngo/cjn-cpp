// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 2 Introduction to C++ Programming
// Making a Difference
// Exercise: 2.30 Body Mass Index Calculator
// We introduced the body mass index (BMI) calculator in Exercise 1.9.
// The formulas for calculating BMI are
// BMI = ( weightInPounds x 703 ) / ( heightInInches x heightInInches )
// or
// BMI = ( weightInKilograms ) / ( heightInMeters x heightInMeters )

// Create a Body Mass Index (BMI) calculator application that read's the user's weight
// in pounds and height in inches. The application should display the following
// information from the Department of Health and Human Services/National Institutes
// of Health: 
// BMI Values
// Underweight: less than 18.5
// Normal:		between 18.5 and 24.9
// Overweight:	between 25 and 29.9
// Obese:		30 or greater

// [Note: In this chapter, you learned to use the int type to represent whole numbers.
// The BMI calculations when done with int values will both produce whole-number results.
// In Chapter 4 you'll learn to use the double type to represent numbers with decimal points.
// When the BMI calculations are performed with doubles, they'll both produce numbers with
// decimal points -- these are called "floating-point" numbers.]

#include "stdafx.h" // generates precompiled header
#include <iostream> // allows program to output data to the screen
using namespace std;

int main()
{
	//The integer variables weight, height and bmi are declared.
	int weight, height, bmi;

	//read the user's weight in pounds and height in inches
	cout << "Enter you weight in pounds: ";
	cin >> weight;

	cout << "Enter you height in inches: ";
	cin >> height;

	//calculates and displays the user's body mass index
	bmi = ((weight * 703) / (height * height)); // BMI formula
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
	system("pause");
} // end function main