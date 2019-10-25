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

int square1(int n)
{
    cout << "address of in-parameter in square1(): " << &n << endl;
    n = n * n;
    return n;
}

void square2(int *n)
{
    cout << "address of in-parameter in square2(): " << n << endl;
    (*n) = (*n) * (*n); // modifying the value at the address
}

void square3(int &n)
{
    cout << "address of in-parameter in square3(): " << &n << endl;
    n = n * n; // modifying the value at the address
}

int main()
{
    pointers();

    int nValue1 = 15;
    // Call by Value
    cout << "address of nValue1 in main():" << &nValue1 << endl;
    square1(nValue1);
    cout << "Square of nValue1: " << nValue1 << endl;

    //Call by Reference
    int nValue2 = 15;
    cout << "address of nValue2 in main():" << &nValue2 << endl;
    square2(&nValue2);
    cout << "Square of nValue2: " << nValue2 << endl;

    //Call by Reference with Reference Arguments
    int nValue3 = 15;
    cout << "address of nValue3 in main():" << &nValue3 << endl;
    square3(nValue3);
    cout << "Square of nValue3: " << nValue3 << endl;

    return 0;
}
