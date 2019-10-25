#include <iostream>
using namespace std;

#define PI 3.141592
#define AREA(x,y) (x*y)
//#define DEBUG

int main()
{

    float fPI = 3.141592;
    string sType = "PARAMETER";
    char cSchool[] = {'C','i','t','y','U','\a','\0'}; // null is required

#ifdef DEBUG
    cout << fPI << endl;
    cout << sType << endl;
    cout << cSchool << endl;
#endif
    cout << AREA(PI,PI) << endl;
    fPI = 2.0;

    float a = 1.3;
    cout << a << endl;

    a = 75ul;
    cout << a << endl;

    a = 7.5e23f;
    cout << a * 2<< endl;

    int *p = nullptr;

}
