// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 4 Control Statements - Part 1
// Exercise: 4:16 Salary Calculator (.h)

// Develop a C++ program that uses a while statement to determine the
// gross pay for each of several employees. The company pays "straight
// time" for the first 40 hours worked by each employee and pays
// "time-and-a-half" for all hours worked in excess of 40 hours.
// You are given a list of the employees of the company, the number of
// hours each employee worked last week and the hourly rate of each
// employee. Your program should input this information for each
// employee and should determine adn display the employee's gross pay.

#pragma once
#include <iostream>
class SalaryCalculator
{
private:
	int _hoursWorked;
	double _hourlyRate;
	double _salary;
public:
	SalaryCalculator();
	// SETTERS
	void setHoursWorked(int hoursWorked);
	void setHourlyRate(double hourlyRate);
	// GETTERS
	int getHoursWorked();
	double getHourlyRate();
	void calculateSalary();
	void displayMessage();
};

