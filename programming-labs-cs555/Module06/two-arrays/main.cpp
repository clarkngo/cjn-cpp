// Author @Clark Jason Ngo
// Author @Kim Mai Nguyen
#include <iostream>
using namespace std;

int main()
{
    // with two arrays, find an element from each array
    // return the pair

    int A[] = {-1, 2, 10, 16, 2};
    int B[] = {10, 11, 6, 7, 3};

    const int size = 5;
    int sum = 0;
    int target = 22;
    int minimumDifference;
    int currentDifference;

    int currentElementAIndex;
    int currentElementBIndex;
    int minimumElementAIndex;
    int minimumElementBIndex;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            sum = A[i] + B[j];
            // get the difference of each sum and target
            currentDifference = target - sum;
            // get the mininum difference (or distance from target)
            // negative, change to positive number
            if (currentDifference < 0)
            {
                currentDifference = abs(currentDifference);
            }

            // currentElementAIndex = i;
            // currentElementBIndex = j;

            // cout << currentDifference << endl;
            if (currentDifference < minimumDifference )
            {   // store minimum difference
                minimumDifference = currentDifference;
                // store minimum indices
                minimumElementAIndex = i;
                minimumElementBIndex = j;
            }
            // return the pairs with the min difference

        }
    }
    cout << "The nearest distance is " << minimumDifference << endl;
    cout << "With the following pairs:" << endl;
    cout << "element A in index " << minimumElementAIndex << " is " << A[minimumElementAIndex] << endl;
    cout << "element B in index " << minimumElementBIndex << " is " << B[minimumElementBIndex] << endl;

    return 0;
}
