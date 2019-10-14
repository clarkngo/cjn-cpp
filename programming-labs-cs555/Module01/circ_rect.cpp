#include <iostream>       // std::cout, std::fixed
#include <string>         // string
#include <iomanip>        // std::setprecision

using namespace std;

class Shape
{
  public:
    // calculate area of circle
    // input type: double
    // return type: double
    double area(double radius)
    {
      const double PI = 3.14;
      return PI * (radius * radius);
    }
    // calculate area of rectangle
    // input type: double, double
    // return type: double
    double area(double length, double width)
    {
      return length * width;
    }

    // prompt user
    void messagePrompt()
    {
      char choose;
      double num1;
      double num2;

      cout << "Please choose 'c' for circle or 'r' for rectangle (c/r):\n";
      cin >> choose;

      while(choose != 'c' && choose != 'r')
      {
        cout << "ERROR: Choose 'c' for circle or 'r' for rectangle (c/r):\n";
        cin >> choose;
      }
      // circle
      if (choose == 'c')
      {
        cout << "Enter number for radius:\n";
        while (!(cin >> num1))
        {
          cout << "ERROR: Enter number for radius:\n";
          cin.clear();            // clear previous input
          cin.ignore(1, '\n');    // discard previous input
        }
        cout << "Area of circle is: ";
        cout << fixed << setprecision(2) << area(num1);
      }
      // rectangle
      else
      {
        cout << "Enter number for length:\n";
        while (!(cin >> num1))
        {
          cout << "ERROR: Enter number for length:\n";
          cin.clear();            // clear previous input
          cin.ignore(1, '\n');    // discard previous input
        }

        cout << "Enter number for width:\n";
        while (!(cin >> num2)) {
          cout << "ERROR: Enter number for width:\n";
          cin.clear();            // clear previous input
          cin.ignore(1, '\n');    // discard previous input
        }
        cout << "Area of rectangle is: ";
        cout << fixed << setprecision(2) << area(num1, num2);
      }
    }
};

int main()
{
  Shape myShape;      // instantiate Shape class

  myShape.messagePrompt();

  cout << endl;
}
