#include <iostream>
#include <string>
#include "car.h"

Car::Car(int Yr, string Mk, string CL, int Spd)
{
	Year = Yr;
	Make = Mk;
	Speed = Spd;
	Color = CL;
}
Car::Car()
{
	Year = 0;
	Make = "";
	Speed = 0;
	Color = "";
}

int Car::getYear()
{
	return Year;
}

string Car::getMake()
{
	return Make;
}
int Car::getSpeed()
{
	return Speed;
}

int Car::Accelerate()
{
	Speed = Speed + 5;
	return Speed;
}

int Car::Brake()
{
	Speed = Speed - 5;
	return Speed;
}
void Car::Display()
{
	getYear();
	getMake();
	getSpeed();
}
