// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 3 Introduction to Classes, Objects and Strings
// Exercise: 3.13 Invoice Class (.cpp)
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
#include "Invoice.h" // Invoice class definition
using namespace std; // program uses from the std namespace
					 // constructor for invoice class

Invoice::Invoice(string number, string desc, int quant, int price)
{
	setPartNumber(number);
	setPartDescription(desc);
	setQuantity(quant);
	setPricePerItem(price);
}
// list of setter and getter functions
void Invoice::setPartNumber(string number)
{
	partNumber = number;
}
string Invoice::getPartNumber()
{
	return partNumber;
}
void Invoice::setPartDescription(string desc)
{
	partDescription = desc;
}
string Invoice::getPartDescription()
{
	return partDescription;
}
// if statement function to prevent negative numbers from appearing.
void Invoice::setQuantity(int quant)
{
	if (quant > 0)
	{
		quantity = quant;
	}
	if (quant <= 0)
	{
		quantity = 0;
	}
}
int Invoice::getQuantity()
{
	return quantity;
}
void Invoice::setPricePerItem(int price)
{
	// if statement function to prevent negative numbers from appearing.
	if (price > 0)
	{
		pricePerItem = price;
	}
	if (price <= 0)
	{
		pricePerItem = 0;
	}
}
int Invoice::getPricePerItem()
{
	return pricePerItem;
}
int Invoice::getInvoiceAmount()
{
	return quantity * pricePerItem;
}
