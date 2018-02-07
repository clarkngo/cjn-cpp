// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 4 Control Statements - Part 1
// Exercise: 4:19 Find the Two Largest Numbers (main.cpp)

// Using an approach similar to that in Exercise 4.17, find the two 
// largest values among the 10 numbers. [Note: You must input each number
// only once.]


#include "stdafx.h"
#include <iostream>
#include "FindTwoLargest.h"
using namespace std;		// program uses from the std namespace
							// function main begins the program
int main()
{
	FindTwoLargest findTwoLargest;
	int counter = 1;
	while (counter <= 10)
	{
		cout << "Enter units sold for sales person " << counter << " : ";
		findTwoLargest.setUnitsSold();
		findTwoLargest.getUnitsSold();
		if (counter > 1)
			findTwoLargest.setSecondLargest();
		findTwoLargest.setFirstLargest();

		cout << "Two largest numbers so far: "
			<< findTwoLargest.getFirstLargest() << ", ";
		if (counter == 1)
			cout << "0";
		if (counter > 1)
			cout << findTwoLargest.getSecondLargest();
		cout << endl << endl;
		counter += 1;
	}
	system("pause");	// allows the system to pause
	return 0;	    	// exit code of the program
} // end main
