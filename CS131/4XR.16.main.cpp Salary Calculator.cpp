// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 4 Control Statements - Part 1
// Exercise: 4:16 Salary Calculator (main.cpp)

// Develop a C++ program that uses a while statement to determine the
// gross pay for each of several employees. The company pays "straight
// time" for the first 40 hours worked by each employee and pays
// "time-and-a-half" for all hours worked in excess of 40 hours.
// You are given a list of the employees of the company, the number of
// hours each employee worked last week and the hourly rate of each
// employee. Your program should input this information for each
// employee and should determine adn display the employee's gross pay.


#include "stdafx.h"
#include <iostream>
#include "SalaryCalculator.h"
using namespace std;		// program uses from the std namespace
							// function main begins the program
int main()
{
	SalaryCalculator SalaryCalculator;
	while (SalaryCalculator.getHoursWorked() != -1)
	{
		cout << "Enter hours worked (or -1 quit): ";
		SalaryCalculator.setHoursWorked(0);
		
		if (SalaryCalculator.getHoursWorked() != -1)
		{
			cout << "Enter hourly rate of the employee ($00.00): ";
			SalaryCalculator.setHourlyRate(0);
			SalaryCalculator.calculateSalary();
			SalaryCalculator.displayMessage();
			cout << endl << endl;
		}
	}
	system("pause");	// allows the system to pause
	return 0;	    	// exit code of the program
} // end main
