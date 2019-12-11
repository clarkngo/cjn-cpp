// Author @Clark Jason Ngo
#include <iostream>
#include <stdlib.h>       /* qsort */
using namespace std;

// helper function for quick sort
// sorts ascending order
int comparator (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

// print array elements
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// print non-repeated numbers in array
void printNonRepeatedNums(int arr[], int size)
{
    int i;
    cout << arr[0] << " ";
    for (i = 1; i < size - 1; i++)
        if (arr[i] == arr[i-1])
            continue;
        else
            cout << arr[i] << " ";
    cout << endl;
}


int main()
{
    const int LENGTH = 10;
    int arr[10] = {2,5,3,2,4,5,3,6,7,3};

    cout << "Before Sorting: ";
    printArray(arr, LENGTH);

    // params: array, length of arr, size of arr, and comparator
    qsort (arr, LENGTH, sizeof(int), comparator);  // Quick Sort from C library

    cout << "After Sorting: ";
    printArray(arr, LENGTH);

    cout << "Non-repeated Numbers: ";
    printNonRepeatedNums(arr, LENGTH);

    return 0;
}
