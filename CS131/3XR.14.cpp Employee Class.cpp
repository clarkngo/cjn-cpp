// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 3 Introduction to Classes, Objects and Strings
// Exercise: 3.14 Employee Class (.cpp)
// Create a class called Employee that includes three pieces of information as
// data members - a first name (type string), a last name (type string) and a
// monthly salary (type int). [Note: In subsequent chapters, we'll use numbers 
// that contain decimal points (e.g., 2.75) - called floating-point values - 
// to represent dollar amounts.] Your class should have a constructor that
// initializes the three data members. Provide a set and a get function for each
// data member. If the monthly salary is not positive, set it to 0. Write a test
// program that demonstrates class Employee's capabilities. Create two Employee
// objects and display each object's yearly salary. Then give each Employee a
// 10 percent raise and display each Employee's yearly salary again.


#include "stdafx.h"
#include "Employee.h" // Employee class definition
using namespace std; // program uses from the std namespace
					 // constructor for Employee class


Employee::Employee(string fname, string lname, int monthlySalary)
{
	setFirstName(fname);
	setLastName(lname);
	setMonthlySalary(monthlySalary);
}

void Employee::setFirstName(string fname)
{
	_fname = fname;
}
string Employee::getFirstName()
{
	return _fname;
}
void Employee::setLastName(string lname)
{
	_lname = lname;
}
string Employee::getLastName()
{
	return _lname;
} 
void Employee::setMonthlySalary(int monthlySalary)
{
	_monthlySalary = monthlySalary;
}
int Employee::getMonthlySalary()
{
	if (_monthlySalary < 0)
		_monthlySalary = 0;
	return _monthlySalary;
}
