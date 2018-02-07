// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 4 Control Statements - Part 1
// Exercise: 4:13 Gas Mileage (.cpp)

// For Exercises 4.13-4.16, perform each of these steps:
//		a) Read the problem statement.
//		b) Formulate the algorithm using pseudocode and top-down, stepwise refinement
//		c) Write a C++ program.
//		d) Test, debug and execute the C++ program.

// 4.13 Gas Mileage
// Drivers are concerned with the mileage obtained by their automobilies. One driver
// has kept track of several trips by recording miles driven and gallons used for each
// trip. Develop a C++ program that uses while statement to input the miles driven and
// gallons used for each trip. The program should calculate and display the miles per
// gallon obtained for each trip and print the combined miles per gallon for all 
// tankfuls up to this point.

// Class average problem using counter - controlled repetition :
// GradeBook source code file. (.cpp)

#include "stdafx.h"
#include <iostream>
#include <iomanip> // parameterized stream manipulators
#include "GasMileage.h"
using namespace std;

GasMileage::GasMileage() {}

// SETTERS
void GasMileage::setMilesDriven() {
	milesDriven = 0.0f;
	std::cout << "Enter miles driven (-1 to quit): ";
	std::cin >> milesDriven;
}
void GasMileage::setGallonsUsed() {
	gallonsUsed = 0.0f;
	std::cout << "Enter gallons used: ";
	std::cin >> gallonsUsed;
}
void GasMileage::setTripMPG() {
	tripMPG = 0.0f;
	tripMPG = (getMilesDriven() / getGallonsUsed());
}
void GasMileage::setTotalMPG() {
	totalMPG = (totalMPG + tripMPG);
}

// GETTERS
double GasMileage::getMilesDriven() {
	return milesDriven;
}
double GasMileage::getGallonsUsed() {
	return gallonsUsed;
}
double GasMileage::getTripMPG() {
	return tripMPG;
}
double GasMileage::getTotalMPG() {
	return totalMPG;
}

void GasMileage::run() {
	setMilesDriven();

	if (getMilesDriven() != -1) {
		setGallonsUsed();
		setTripMPG();
		setTotalMPG();

		std::cout << "MPG this trip: " << getTripMPG() << std::endl;
		std::cout << "Total MPG: " << getTotalMPG() << std::endl;
		std::cout << endl;
	}
}