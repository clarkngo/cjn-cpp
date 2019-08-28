// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 4 Control Statements - Part 1
// Exercise: 4:16 Salary Calculator (.cpp)

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
#include <iomanip> // parameterized stream manipulators
#include "SalaryCalculator.h"
using namespace std;

SalaryCalculator::SalaryCalculator() {}

// SETTERS
void SalaryCalculator::setHoursWorked(int hoursWorked)
{
	cin >> hoursWorked;
	_hoursWorked = hoursWorked;
}
void SalaryCalculator::setHourlyRate(double hourlyRate)
{
	cin >> hourlyRate;
	_hourlyRate = hourlyRate;
}

// GETTERS
int SalaryCalculator::getHoursWorked()
{
	return _hoursWorked;
}
double SalaryCalculator::getHourlyRate()
{
	return _hourlyRate;
}

void SalaryCalculator::calculateSalary()
{
	// straight time for first 40 hours
	// time-and-a-half for all hours excess of 40 hours
	if (_hoursWorked > 40)
		_salary = (40 * _hourlyRate) + ((_hoursWorked - 40) * (_hourlyRate * 1.5));
	else
		_salary = (_hoursWorked * _hourlyRate);
}

void SalaryCalculator::displayMessage()
{
	cout << "Salary is: $" << setprecision(2) << fixed << _salary;
}