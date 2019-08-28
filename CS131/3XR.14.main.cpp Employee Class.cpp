// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 3 Introduction to Classes, Objects and Strings
// Exercise: 3.14 Employee Class (main.cpp)
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
#include <iostream>
#include "Employee.h"
int main()
{
	Employee employee1("Clark", "Ngo", -10);
	Employee employee2("Justine", "Cho",25);

	cout << "Initial salaries of employees: \n";

	cout << employee1.getLastName() << " " << employee1.getFirstName()
		<< " - Annual Salary is: " << employee1.getMonthlySalary() * 12 << endl;
	cout << employee2.getLastName() << " " << employee2.getFirstName()
		<< " - Annual Salary is: " << employee2.getMonthlySalary() * 12 << endl;

	cout << "\nBonus 10% raise to all employees!\n";

	cout << "\nNew salaries of employees: \n";

	cout << employee1.getLastName() << " " << employee1.getFirstName()
		<< " - Annual Salary is: " << employee1.getMonthlySalary() * 12 << endl;
	cout << employee2.getLastName() << " " << employee2.getFirstName()
		<< " - Annual Salary is: " << employee2.getMonthlySalary() * 12 << endl;



	system("pause");
	return 0;
}
