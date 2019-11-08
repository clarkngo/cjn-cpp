// Author @Clark Jason Ngo
#include <iostream>

using namespace std;

int main()
{
    int c_age = 18;
    int d_age = 21;
    // pointer holds the address and the value from the address

    // 1) can' change the value on that address
    // but can change the address
    const int *p = &c_age;

    // 2) can't change the address, but can change the value
    // int * const p = &c_age;

    // 3) can't change the address and also the value on that address
    // const int *const p = &c_age;


    // Going back to number 1)
    // can't change *p because of "const *p"
    // you can't change the value in that address
    // *p = 21;

    p = &d_age; // but you can change the address of the pointer
    cout << *p << " " << p << endl;

    return 0;
}
