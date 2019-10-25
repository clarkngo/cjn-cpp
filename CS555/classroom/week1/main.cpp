#include "car.h"
using namespace std;

int main()
{
    int choice;

    // Car car_john(2004, "Honda Accord", "Gray", 50);
    // Car car_kate(2014, "Ford Edge", "Burgundy", 62);
    Car car(2018, "Nissan Altima", "Silver", 55);

    cout << "The car is a " << car.getYear() << " " << car.getMake() << " going " << car.getSpeed() << " MPH." << endl;
	do
	{
        cout << endl;
		cout << "          Menu         " << endl;
		cout << "-----------------------" << endl;
		cout << " 1. Accelerate         " << endl;
		cout << " 2. Brake              " << endl;
		cout << " 3. Exit               " << endl;
		cout << "-----------------------" << endl;
		cout << "\nEnter your choice:   " << endl;
		cin >> choice;

		switch (choice)
		{
			case 1: cout << "Accelerating  ";
					cout << car.Accelerate();
					break;
			case 2: cout << "Braking  ";
					cout << car.Brake();
					break;
			case 3: cout << "Exiting Program";
					return 0;
					break;
		}
	} while (choice != 3);

	cout << endl << "Press ENTER to exit...";
	cin.clear();
}
