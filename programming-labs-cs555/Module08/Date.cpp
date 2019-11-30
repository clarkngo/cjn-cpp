// Author @Clark Jason Ngo
#include <iostream>
using namespace std;

class Date
{
	public:
		Date();							// constructor
		void setDays();					// get user input as integer days
		void convertToDate();		    // days converted to years, months, and days
		void printDate();				// print years, months, and days to user
	private:
		int _inputDays;					// input from user
		int _years;
		int _months;
		int _days;
};

Date::Date()
{   // initialize data members upon creation of object
    _months = 0;
    _years = 0;
    _days = 0;
}

void Date::setDays()
{
    int input;
    cout << "Enter a number of days:\t";  // prompt user for input
    cin >> input;
    // while not an integer or more the max integer
    while (cin.fail() || input > INT_MAX)
    {
        cin.clear();            // clear previous input
        cin.ignore(1, '\n');    // discard previous input
        cerr << "Invalid input. Please input number 0 to 2147483647" << endl;
        cout << "Enter a number of days:\t";
        cin >> input;
    }
    _inputDays = input;
    _days = input;
}

// convert days to years, months, and days format
void Date::convertToDate()
{   // while days is over or equal to 365, keep carrying over to years
    while (_days >= 365)
    {
        _days -= 365;
        _years += 1;
    }
    // while days is over or equal to 30, keep carrying over to months
    while (_days >= 30)
    {
        _days -= 30;
        _months += 1;
    }
}

void Date::printDate()
{
    cout << _inputDays << " days is converted to: " << endl;
    cout << _years << " years, " << _months << " months, and " << _days << " days.";
    cout << endl;
}

int main()
{
    // Program 1
    cout << "Program (1)\n";
    Date date1;                 // create a new object date
    date1.setDays();            // ask user input for days in integer
    date1.convertToDate();      // convert days to years, months, and days
    date1.printDate();          // print years, months, and days to user

}
