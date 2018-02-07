// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 3 Introduction to Classes, Objects and Strings
// Exercise: 3.13 Invoice Class (main.cpp)
// Create a class called Invoice that a hardware store might use to represent
// an invoice for an item sold at the store. An Invoice should include four data
// members - a part number (type string), a part description (type string), a
// quantity of items being purchased (type int). [Note: In subsequent chapters, 
// we'll use numbers that contain decimal points (e.g., 2.75) - called 
// floating-point values - to represent dollar amounts.] Your class should have a
// constructor that initializes four data members. Provide a set and get function
// for each data member. In addition, provide a member function named getInvoiceAmount
// that calculates the invoice amount (i.e., multiplies the quantity by the price
// per item), then returns the amount as an int value. If the quantity is not positive,
// it should be set to 0. If the price per item is not position, it should be set to 0,=.
// Write a test program that demonstrates class Invoice's capabilities.

#include "stdafx.h"
#include <iostream>
#include "Invoice.h"
int main()
{
	Invoice invoice1("1", "first invoice", 30, 10); // create an invoice object named invoice1
	Invoice invoice2("2", "second invoice", -40, -4); // create an invoice object named invoice2
													  // Prints an invoice with stored values and negative numbers will be zero
	cout << "Invoice amount for " << invoice1.getPartDescription() << ", which is " << invoice1.getQuantity() << " parts " <<
		invoice1.getPricePerItem() << " each is " << invoice1.getInvoiceAmount() << endl;
	cout << "Invoice amount for " << invoice2.getPartDescription() << ", which is " << invoice2.getQuantity() << " parts " <<
		invoice2.getPricePerItem() << " each is " << invoice2.getInvoiceAmount() << endl;
	system("pause");
	return 0;
}
