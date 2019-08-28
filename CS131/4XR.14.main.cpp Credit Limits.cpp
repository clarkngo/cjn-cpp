// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 4 Control Statements - Part 1
// Exercise: 4:14 Credit Limits (main.cpp)

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

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include "CreditLimits.h"
using namespace std;		// program uses from the std namespace
							// function main begins the program
int main()
{
	CreditLimits account1;
	while (account1.getAccountNumber() != -1)
	{
		cout << setprecision(2) << fixed;
		cout << "Enter account number (or -1 quit): "; account1.setAccountNumber(0);
		if (account1.getAccountNumber() != -1)
		{
			cout << "Enter beginning balance: "; account1.setBeginningBalance(0);
			cout << "Enter total charges: "; account1.setCharges(0);
			cout << "Enter total credits: "; account1.setCredits(0);
			cout << "Enter credit limit: "; account1.setCreditLimit(0);
			cout << "New balance is: " << account1.getNewBalance() << endl;
			account1.displayMessage();
		}
		cout << endl;
	}
	system("pause");	// allows the system to pause
	return 0;	    	// exit code of the program
} // end main
