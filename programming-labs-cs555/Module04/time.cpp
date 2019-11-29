#include <iostream>
using namespace std;

class Time {
    // create a new type defintion Time
    // to use as function return type
	typedef Time time;
    private:
        // good practice to have underscores for private variables
        int _hours;
        int _minutes;
    public:
        void settime(int hours, int minutes) // to set the specified value in object
        {
            _hours = hours;         // assign parameter to the member variable _hours

            while (minutes >= 60)   // the minute format is only until the number 60
            {
                minutes -= 60;
                _hours += 1;        // excess of number 59 gets carried to _hours variable
            }
            _minutes = minutes;     // assign parameter minutes to member variable _minutes
        }

        // get _hour member variable
		int gethour()
		{
			return _hours;
		}

        // get _minutes member variable
		int getminutes()
		{
			return _minutes;
		}

        // print to the user the hours and minutes of a time object
        void showtime()
        {   // add zeroes in front is single digit
            if (_hours < 10) {
                cout << "0";
            }
            cout << _hours << ":";
            // add zeroes in front is single digit
            if (_minutes < 10) {
               cout << "0";
            }
            cout << _minutes << endl;

            cout << _hours << " hour(s) and ";
            cout << _minutes << " minute(s)" << endl;
        }

        time sum(Time time) // to sum two time object & return time
        {
			Time time_sum;      // create new time object

            // new time object = time object who called the function + time object as parameter
            // we sum up the time object caller and time object parameter's _hours and _minutes
			time_sum._hours = Time::_hours + time._hours;
			time_sum._minutes = Time::_minutes + time._minutes;
            while (time_sum._minutes >= 60)    // the minute format is only until the number 60
            {
                time_sum._minutes -= 60;
                time_sum._hours += 1;         // excess of number 59 gets carried to _hours variable
            }
			return time_sum;
        }
};

int main()
{
    Time time1, time2, time3;       // create 3 Time objects
    time1.settime(3,45);            // set hours and minutes for time1
	time2.settime(4,35);            // set hours and minutes for time2
	time3 = time1.sum(time2);       // set hours and minutes of time3 by adding time1 and time2
	cout << "time1: \n";
    time1.showtime();               // print time1 hours and minutes
	cout << "\n";
	cout << "time2: \n";
	time2.showtime();               // print time2 hours and minutes
	cout << "\n";
	cout << "time3: \n";            // print time3 hours and minutes
	time3.showtime();
	cout << "\n";
}
