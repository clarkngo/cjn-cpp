// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 3 Introduction to Classes, Objects and Strings
// Exercise: 3.13 Invoice Class (.h)
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

#include <string> // allows program to input string
using namespace std; // program uses from the std namespace
class Invoice //class
{
	// variables accessible to outside of the class object
public:
	//constructor of invoice class
	Invoice(string, string, int, int);
	void setPartNumber(string number);
	string getPartNumber();
	void setPartDescription(string desc);
	string getPartDescription();
	void setQuantity(int quant);
	int getQuantity();
	void setPricePerItem(int price);
	int getPricePerItem();
	int getInvoiceAmount();
	// variables not accessible to outside of the class object
private:
	string partNumber;
	string partDescription;
	int quantity;
	int pricePerItem;
};

