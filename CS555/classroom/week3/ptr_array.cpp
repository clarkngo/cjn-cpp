#include <iostream>
using namespace std;




int main()
{
    int array[5] = {0, 1, 2, 3, 4};
    // array name itself is a pointer to the first element
    cout << *array << endl;

    int *ptr = array;
    cout << *ptr << endl;
    cout << *(ptr+1) << endl;
    cout << *(ptr+2) << endl;

    //int *array2 = new int (10);


    return 0;
}
