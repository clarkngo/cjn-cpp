// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 4 Control Statements - Part 1
// Exercise: 4:14 Credit Limits (.h)

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

#pragma once
#include <iostream>
class CreditLimits
{
private:
	int _accountNumber;
	double _beginningBalance;
	double _charges;
	double _credits;
	double _creditLimit;
	double _newBalance;
public:
	CreditLimits();
	// SETTERS
	void setAccountNumber(int accountNumber);
	void setBeginningBalance(double beginningBalance);
	void setCharges(double charges);
	void setCredits(double credits);
	void setCreditLimit(double creditLimit);
	// GETTERS
	int getAccountNumber();
	double getBeginningBalance();
	double getCharges();
	double getCredits();
	double getCreditLimit();
	double getNewBalance();
	void displayMessage();
};

