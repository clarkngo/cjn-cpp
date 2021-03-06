// Author @Clark Jason Ngo
// C++ funtions

// return true if pair2 is a multiple of pair1
bool mutiple(int pair1, int pair2)
{
	if (pair1 % pair2 == 0)
		return true;
	else
		return false;
}

// calculate hypotenuse
double hypotenuse(double side1, double side2)
{
	return sqrt(side1 * side1 + side2 * side2);
}

// bool Pythagorean
bool PythagoreanTriple(int a, int b, int c) {
  return a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b;
}

// bool Pythagorean 
bool PythagoreanTriple(const int a, const int b, const int c)
{
  const auto square_sum = a * a + b * b + c * c;
  const auto max = std::max({a, b, c});

  return square_sum == 2 * (max * max);
}

// exponentation
int integerPower(int base, int exponent)
{
	int power = 1;
	for (int i = 1; i <= exponent; i++)
		power *= base;
	return power;
}

// Rounding numbers

double roundToInteger(double number)
{
	return floor(number + .5);
}

double roundToTenths(double number)
{
	return floor(number * 10 + .5) / 10;
}
double roundToHundredths(double number)
{
	return floor(number * 100 + .5) / 100;
}
double roundToThousandths(double number)
{
	return floor(number * 1000 + .5) / 1000;
}

// Even numbers
int isEven(int number)
{
	if (number % 2 == 0)
		return true;
	else
		return false;
}

// for loops print a square
void squareOfAsterisks(int side)
{
	for (int i = 1; i <= side; i++)
	{
		for (int j = 1; j <= side; j++)
			cout << '*';
		cout << endl;
	}
}

// for loops
void squareOfAnyCharacter(int side, string fillCharacter)
{
	for (int i = 1; i <= side; i++)
	{
		for (int j = 1; j <= side; j++)
			cout << fillCharacter;
		cout << endl;
	}
}

void separatingDigits(int number)
{
	int digit;
	if (number < 10)
		digit = 1;
	else
		if (number < 100)
			digit = 2;
		else
			if (number < 1000)
				digit = 3;
			else
				if (number < 10000)
					digit = 4;
				else
					digit = 5;
	switch (digit)
	{
	case (5):
		cout << number % 100000 / 10000 << "  ";
	case (4):
		cout << number % 10000 / 1000 << "  ";
	case (3):
		cout << number % 1000 / 100 << "  ";
	case (2):
		cout << number % 100 / 10 << "  ";
	case (1):
		cout << number % 10 << "  ";	
	}

}

// hours, minutes, seconds to seconds converter
int numberOfSeconds(int hours, int minutes, int seconds)
{
	int totalSeconds;
	totalSeconds = hours * 3600 + minutes * 60 + seconds;
	return totalSeconds;
}


// convert fahrenheit to celsius
double celsius(double fValue)
{
	return (fValue - 32) * 5 / 9;
}

// convert celsius to fahrenheit
double fahrenheit(double cValue)
{
	return cValue * 9 / 5 + 32;
}

// find minimum of three integers
double findMinimum(double num1, double num2, double num3)
{
	double smallest;
	if (num1 < num2 && num1 < num3)
		smallest = num1;
	else if (num2 < num1 && num2 < num3)
		smallest = num2;
	else
		smallest = num3;
	return smallest;
}

// recursion factorial
unsigned long long factorial(unsigned long long number)
{
	if (number == 1 || number == 0)
		return 1;
	else
		number *= factorial(number - 1);
}
