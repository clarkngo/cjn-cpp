#include <iostream>
using namespace std;

void pointers()
{
    int var = 20;
    //declare pointer variable which contains the address (pointing to an address)
    int *ptr;
    // note that data type of ptr and var must be matched
    ptr = &var;
    // assign the address of a variable to a pointer
    cout << "Value at ptr = " << ptr << endl;
    cout << "Value at var = " << var << endl;
    cout << "Value at *ptr = " << *ptr << endl;
}


int main()
{
    pointers();
}
