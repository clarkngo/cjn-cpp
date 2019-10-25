#include <iostream>
using namespace std;

unsigned long long int factorial(unsigned int i)
{
    cout << i << endl;
    if(i <= 0)
    {
        return 1;
    }
    else
    {
        return i * factorial(i - 1);
    }
}
//
// 7 ^3
unsigned long int computePower(int base, int power)
{
    cout << power << endl;
    // exit condition, if power == 0 then return 1;
    if(power == 0)
    {
        return 1;
    }
    else
    {
        return(base * computePower(base, power - 1));
    }
}
int main()
{
//    int i = 12;
//    cout << "Factorial of " << i << " is " << factorial(i) << endl;
    cout << "power function : "<< computePower(7, 5) << endl;
    return 0;
}
