// Author @Clark Jason Ngo
#include <iostream>
#include "array.h"
using namespace std;

int main()
{
    Array theRay(5);

    Array theRay2(10);

    cout << endl;
    cout << theRay.len();
    // theRay.print();

    theRay[0] = 10;
    theRay[50] = 10;
    theRay2 = theRay;
    theRay2.print();
    return 0;
}
