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

int main()
{
  pointers();
  return 0;
}


