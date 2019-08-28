// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 4 Control Statements - Part 1
// Exercise: 4:15 Sales Commission Calculator (.cpp)

// A large company pays its salespeople on a commission basis.
// The salespeoeple each receive $200 per week plus 9% of their 
// gross sales for that week. For example, a salesperson who
// sells $5000 worth of chemicals in a week recevies $200 plus
// 9% of $5000, or a total of $650. Develop a C++ program that
// uses a while statement to input each salesperson's gross
// sales for last week and calculates and displays that
// salesperson's earnings. Process one salesperson's figure
// at a time.

#include "stdafx.h"
#include <iostream>
#include <iomanip> // parameterized stream manipulators
#include "SalesCommission.h"
using namespace std;

SalesCommission::SalesCommission() {}

// SETTERS
void SalesCommission::setSales(double sales)
{
	cin >> sales;
	_sales = sales;
}

// GETTERS
double SalesCommission::getSales() 
{ 
	return _sales; 
}

void SalesCommission::calculateSalary()
{
	_salary = 200 + _sales * 0.09;
}

void SalesCommission::displayMessage()
{
	cout << "Salary is: $" << setprecision(2) << fixed << _salary;
}