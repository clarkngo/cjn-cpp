// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 4 Control Statements - Part 1
// Exercise: 4:14 Credit Limits (.cpp)

// Develop a C++ program that will determine whether a department-store customer has
// exceeded the credit limit on a charge account. For each customer, the following 
// facts are available:
//		a) Account number (an integer)
//		b) Balance at the beginning of the month
//		c) Total of all items charged by this customer this month
//		d) Allowed credit limit

// The program should use a while statement to input each of these facts, calculate the
// new balance (= balance balance + charges - credits) and determine whether the new
// balance exceeds the customer's credit limit. For those customers whose credit limit is
// exceeded, the program should display the customer's account number, credit limit, new
// balance and the message "Credit Limit Exceeded."

// Definition of class GradeBook that determines a class average.
// Member functions are defined in GradeBook.cpp

#include "stdafx.h"
#include <iostream>
#include <iomanip> // parameterized stream manipulators
#include "CreditLimits.h"
using namespace std;

CreditLimits::CreditLimits() {}

// SETTERS
void CreditLimits::setAccountNumber(int accountNumber)
{
	cin >> accountNumber;
	_accountNumber = accountNumber;
}
void CreditLimits::setBeginningBalance(double beginningBalance)
{
	cin >> beginningBalance;
	_beginningBalance = beginningBalance;
}
void CreditLimits::setCharges(double charges)
{
	cin >> charges;
	_charges = charges;
}
void CreditLimits::setCredits(double credits)
{
	cin >> credits;
	_credits = credits;
}
void CreditLimits::setCreditLimit(double creditLimit)
{
	cin >> creditLimit;
	_creditLimit = creditLimit;
}

// GETTERS
int CreditLimits::getAccountNumber() { return _accountNumber; }
double CreditLimits::getBeginningBalance() { return _beginningBalance; }
double CreditLimits::getCharges() { return _charges; }
double CreditLimits::getCredits() { return _credits; }
double CreditLimits::getCreditLimit() { return _creditLimit; }
double CreditLimits::getNewBalance() { return _newBalance = _beginningBalance + _charges - _credits; }

void CreditLimits::displayMessage()
{
	if (_newBalance > _creditLimit)
	{
		cout << "Account: \t" << getAccountNumber() << endl;
		cout << "Credit Limit: \t" << getCreditLimit() << endl;
		cout << "Balance: \t" << getNewBalance() << endl;
		cout << "Credit Limit Exceeded." << endl;
	}
}