#include <iostream>
#include <iomanip>
#include <cmath>
//#define DEBUG

bool approximatelyEqual(double d1, double d2, double epsilon)
{
#ifdef DEBUG
    std::cout << "d1 = " << d1 << " d2 = " << d2 << std::endl;
    std::cout << "fabs(d1) = " << fabs(d1) << std::endl;
    std::cout << "fabs(d2) = " << fabs(d2) << std::endl;
    std::cout << "fabs(d1 - d2) = " << fabs(d1 - d2) << std::endl;
#endif

    // what this means is that
    // if the difference between 2 values is less than the percentage of larger magnitude the value
    // then it is "approximately close"
    return fabs(d1 - d2) <= ( (fabs(d1) < fabs(d2) ? fabs(d2) : fabs(d1)) * epsilon);
}

int main()
{
    std::cout << "bool:\t\t" << sizeof(bool) << " bytes\n";
    std::cout << "char:\t\t" << sizeof(char) << " bytes\n";
    std::cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes\n";
    std::cout << "char16_t:\t" << sizeof(char16_t) << " bytes\n"; // C++11 only
    std::cout << "char32_t:\t" << sizeof(char32_t) << " bytes\n"; // C++11 only
    std::cout << "short:\t\t" << sizeof(short) << " bytes\n";
    std::cout << "int:\t\t" << sizeof(int) << " bytes\n";
    std::cout << "long:\t\t" << sizeof(long) << " bytes\n";
    std::cout << "long long:\t" << sizeof(long long) << " bytes\n"; // C++11 only
    std::cout << "float:\t\t" << sizeof(float) << " bytes\n";
    std::cout << "double:\t\t" << sizeof(double) << " bytes\n";
    std::cout << "long double:\t" << sizeof(long double) << " bytes\n";

/*
    short x = 10;
    x = x * 127 * 100;
    std::cout << x;
*/
    int a = 14, b = 3;
    std::cout << a / b << std::endl;;


    int x = 5;        // 5 -> integer
    double y = 5.0;   // 5.0 -> no literal means double
    float z = 5.2f;   // 5.0f -> float

    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;
    std::cout << "z = " << z << std::endl;

    double d1 = 1.0;
    double d2 = 0.1;

    std::cout << std::setprecision(17);

    d2 = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;

    std::cout << "d1 = " << d1 << std::endl;
    std::cout << "d2 = " << d2 << std::endl;

//    std::cout << approximatelyEqual(d1, d2, 1e-8);



    d1 = 100 - 99.99; // = 0.01
    d2 = 10 - 9.99;   // = 0.01

    if (d1 == d2)
    {
        std::cout << "same" << std::endl;
    }
    else
    {
        std::cout << "what?" << std::endl;
    }

    if(approximatelyEqual(d1, d2, 1e-8))
    {
        std::cout << "same" << std::endl;
    }
    else
    {
        std::cout << "what?" << std::endl;
    }



    return 0;
}
