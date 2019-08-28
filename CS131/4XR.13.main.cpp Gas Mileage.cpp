// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 4 Control Statements - Part 1
// Exercise: 4:13 Gas Mileage (main.cpp)

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


#include "stdafx.h"
#include <iostream>
#include "GasMileage.h"
using namespace std;		// program uses from the std namespace
							// function main begins the program
int main(int argc, const char *argv[]) 
{
		GasMileage gm;
		while (gm.getMilesDriven() != -1)
		{
			gm.run();
		}

	cout << endl;
	system("pause");	// allows the system to pause
	return 0;	    	// exit code of the program
} // end main
