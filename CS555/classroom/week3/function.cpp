#include <iostream>
using namespace std;


// return type
// function name
// parameter list (type and variable name)
int get_max(int a, int b)
{
    int retValue;
    (a > b) ? retValue = a : retValue = b;
    return retValue;
}

void print_array(int *ray, int count)
{
    for(int i = 0; i < count; i++)
    {
        cout << i << ": " << ray[i] << endl;
    }
}

int main()
{
    //cout << "result :" << max(1, 2) << endl;
    int count = 10;
    int *array = new int (count); // dynamic allocation
    for(int i = 0; i < count; i++)
    {
        array[i] = rand();
    }

    print_array(array, count);
    return 0;
}
