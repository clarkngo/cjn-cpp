// Author @Clark Jason Ngo
#include <iostream>
#include <string>
using namespace std;

class Leap
{
	public:
		Leap();									// constructor
		void setYears();			  // get user input as integer years
		void isLeapYear();		// days converted to years, months, and days
		void printResult();				// print years, months, and days to user
	private:
		int _years;
    bool _isLeapYear;
};

Leap::Leap()
{   // initialize data members upon creation of object
    _years = 0;
    _isLeapYear = false;
}

void Leap::setYears()
{
    int input;
    cout << "Enter a number of years: "; // prompt user for input
    cin >> input;
    // while not an integer or more the max integer
    while (cin.fail() || input > INT_MAX)
    {
        cin.clear();            // clear previous input
        cin.ignore(1, '\n');    // discard previous input
        cerr << "Invalid input. Please input number 0 to 2147483647" << endl;
        cout << "Enter a number of years:\t";
        cin >> input;
    }
    _years = input;
}

void Leap::isLeapYear()
{
    if (_years % 4 == 0)        // if divisible by 4
    {
      if (_years % 100 == 0)    // if divisible by 100 but ....
      {
        if (_years % 400 == 0)  // ... divisible by 400
        {
          _isLeapYear = true;   // Leap Year =)
        }
      }
      else
      {
        _isLeapYear = true;     // if divisble by 4 and NOT divisble by 100
      }
    }
}

void Leap::printResult()
{
    string isNOT = "";
    if (_isLeapYear == false)
    {
      isNOT = "NOT";
    }
    cout << "Year " << _years << " "<< isNOT <<  " a Leap Year." << endl;
}

int main()
{
    // Program 2
    cout << "Program (2)\n";
    Leap Leap1;                   // create a new object Leap
    Leap1.setYears();             // ask user input for years in integer
    Leap1.isLeapYear();           // check if leap year
    Leap1.printResult();          // print result if leap year or not

}
