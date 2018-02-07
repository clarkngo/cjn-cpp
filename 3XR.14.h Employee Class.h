// Author @Clark Jason Ngo
// How to program C++, 8th Ed, Deitel & Deitel.
// Chapter 3 Introduction to Classes, Objects and Strings
// Exercise: 3.14 Employee Class (.h)
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


#include <string> // allows program to input string
using namespace std; // program uses from the std namespace
class Employee //class
{	
public:
	Employee(string fname, string lname, int monthlySalary);
	void setFirstName(string fname);
	string getFirstName();
	void setLastName(string lname);
	string getLastName();
	void setMonthlySalary(int monthlySalary);
	int getMonthlySalary();

	// variables not accessible to outside of the class object
private:
	string _fname;
	string _lname;
	int _monthlySalary;
};
