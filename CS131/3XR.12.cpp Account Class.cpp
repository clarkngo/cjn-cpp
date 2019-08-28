// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 3 Introduction to Classes, Objects and Strings
// Exercise: 3.12 Account Class (.cpp)
// Create an Account class that a bank might use to represent customers' bank
// accounts. Include a data member of type int to represent the account balance.
// [Note: In subsequent chapters, we'll use numbers that contain decimal points
// (e.g., 2.75) - called floating-point values - to represent dollar amounts.]
// Provide a constructor that receives an inital balance and uses it to initialize
// the data member. The constructor should validate the initial balance to ensure
// that it's greater than or equal to 0. If not, set the balance to 0 and display
// an error message indicating that the initial balance was invalid. Provide
// three member functions. Member function credit should add an amount to the
// current balance. Member function debit should withdraw money from the Account
// and ensure that the debit amount does not exceed the Account's balance. If it
// does, the balance should  be left unchanged and the function should print a
// message indicating "Debit amount exceeded account balance." Member function
// getBalance should return the current balance. Create a program that creates
// two Account objects and tests the member functions of class Account.

#include "stdafx.h"
#include <iostream>
#include "Account.h"

Account::Account(int initialBalance)
{
	_accountBalance = 0;
	// assume that the balance begins at 0
				 // if initialBalance is greater than 0, set this value as the
				 // balance of the Account; otherwise, balance remains 0
	if (initialBalance > 0)
		_accountBalance = initialBalance;

	if (initialBalance < 0)
	{
		cout << "Error: Initial balance cannot be negative.\n" <<endl;
	}
}


void::Account::credit(int c)
{
	_accountBalance = _accountBalance + c;
}

void::Account::debit(int d)
{
	if (_accountBalance > d)
		_accountBalance = _accountBalance - d;
	else
		cout << "Debit amount exceeded account balance.\n";
}

int::Account::getBalance()
{
	return _accountBalance;
}

