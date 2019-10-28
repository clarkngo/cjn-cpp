#include <iostream>
using namespace std;

class Time {
	typedef Time time;
    private:
        int _hours;
        int _minutes;
    public:
        void settime(int hours, int minutes) // to set the specified value in object
        {
            _hours = hours;

            while (minutes >= 60)
            {
                minutes -= 60;
                _hours += 1;
            }
            _minutes = minutes;
        }

		int gethour()
		{
			return _hours;
		}

		int getminutes()
		{
			return _minutes;
		}

        void showtime() // to display time object
        {
            if (_hours < 10) {
                cout << "0";
            }
            cout << _hours << ":";
            if (_minutes < 10) {
               cout << "0";
            }
            cout << _minutes << endl;

            cout << _hours << " hour(s) and ";
            cout << _minutes << " minute(s)" << endl;
        }

        time sum(Time time) // to sum two time object & return time
        {
			Time time_sum;

			time_sum._hours = Time::_hours + time._hours;
			time_sum._minutes = Time::_minutes + time._minutes;
            while (time_sum._minutes >= 60)
            {
                time_sum._minutes -= 60;
                time_sum._hours += 1;
            }
			return time_sum;
        }
};

int main()
{
    Time time1, time2, time3;
    time1.settime(3,45);
	time2.settime(4,35);
	time3 = time1.sum(time2);
	cout << "time1: \n";
    time1.showtime();
	cout << "\n";
	cout << "time2: \n";
	time2.showtime();
	cout << "\n";
	cout << "time3: \n";
	time3.showtime();
	cout << "\n";
}
