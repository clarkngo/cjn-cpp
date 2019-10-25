#include <iostream>
#include <string>
using namespace std;

class Car
{
	private:
		int Year;
		string Make;
		string Color;
		int Speed;

	public:
		Car(int, string, string, int);
		Car();
		int getYear();
		string getMake();
		int getSpeed();
		int Accelerate();
		void Display();
		int Brake();
};
