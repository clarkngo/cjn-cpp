#include <iostream>
using namespace std;

/*

Address is much cheaper in memory to point

Value to Address, use & "referencing"
Address to Value, use * "deferencing"

|   Var   | Value | Addr |
|  nValue |   20  | fec8 |
|  nPtr   |  fec8 |      |

*nPtr * -> Value of

*/

void pointers()
{
    int nValue = 20;
    int *nPtr;        // pointer variable only holds address
    nPtr = &nValue;   // assign the address of nValue to nPtr pointer
    cout << "nValue = " << nValue << endl;    // 20
    cout << "nPtr = " << nPtr << endl;        // address: i.e. 0x7ffee
    cout << "address of nValue " << &nValue << endl;  // address: i.e. 0x7ffee

    // trick, this just cancels each other
    // this would get the value
    cout << *(&nValue);
}

int square1(int n)
{
  cout << "address of in-parameter in square2(): " << n << endl;
    n = n * n;
    return n;
}

// we don't use this much
void square2(int *n)
{
    cout << "address of in-parameter in square2(): " << n << endl;
    (*n) = (*n) * (*n);
}

// this is better, cleaner
void square3(int &n)
{
    cout << "address of in-parameter in square3(): " << n << endl;
    n = n + n; // modifying the value at the address
}

// copy: pass by value | reference by value | deep copy
void callByValue()
{
    int nValue1 = 15;
    cout << "address of nValue1 in main():" << &nValue1 << endl;
    square1(nValue1);
    cout << "Square of nValue1: " << nValue1 << endl;
}

// pass by reference is default
void callByReference()
{
  int nValue1 = 15;
  cout << "address of nValue1 in main():" << &nValue1;
}

int main()
{
  pointers();
  return 0;
}


