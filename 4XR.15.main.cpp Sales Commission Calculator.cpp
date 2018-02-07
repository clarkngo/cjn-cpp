// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 4 Control Statements - Part 1
// Exercise: 4:15 Sales Commission Calculator (main.cpp)

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
#include "SalesCommission.h"
using namespace std;		// program uses from the std namespace
							// function main begins the program
int main() 
{
	SalesCommission salesCommission;
	while (salesCommission.getSales() != -1)
	{
		cout << "Enter sales in dollars (or -1 quit): ";
		salesCommission.setSales(0);

		if(salesCommission.getSales() != -1)
		{
			salesCommission.calculateSalary();
			salesCommission.displayMessage();
			cout << endl << endl;
		}
	}
	system("pause");	// allows the system to pause
	return 0;	    	// exit code of the program
} // end main
