#include <iostream>       // std::cout
#include <stdlib.h>       /* srand, rand, qsort */
#include <time.h>         /* time */

using namespace std;

void populateArray(int arr[], int length)
{
  for (int i = 0; i < length; i++)
  {
    arr[i] = (rand() % 1000 + 1);
  }
}

void printArray(int arr[], int length)
{
  cout << "[" << arr[0];
  for (int i = 1; i < length; i++)
  {
    cout << ", "<< arr[i];
  }
  cout << "]" << endl;
}

int compareAscending (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int compareDescending (const void * a, const void * b)
{
  return ( *(int*)b - *(int*)a );
}

// Merge arr1[0..n1-1] and arr2[0..n2-1] into
// arr3[0..n1+n2-1]
void mergeArrays(int arr1[], int arr2[], int n1,
                             int n2, int arr3[])
{
    int i = 0, j = 0, k = 0;

    // Store remaining elements of first array
    while (i < n1)
        arr3[k++] = arr1[i++];

    // Store remaining elements of second array
    while (j < n2)
        arr3[k++] = arr2[j++];
}

int main()
{
  srand (time(NULL));   // to have true randomnesss
  const int M = 5;
  const int N = 5;
  int A[M];
  int B[N];
  int C[M+N];

  populateArray(A, M);

  // void qsort (void* base, size_t num, size_t size,	int (*comparator)(const void*,const void*));
  qsort (A, M, sizeof(int), compareAscending);  // Quick Sort from C library
  cout << "Array A: ";
  printArray(A, M);

  populateArray(B, N);
  qsort (B, N, sizeof(int), compareDescending);  // Quick Sort from C library
  cout << "Array B: ";
  printArray(B, M);

  mergeArrays(A, B, M, N, C);
  qsort (C, M+N, sizeof(int), compareAscending);
  cout << "Array C: ";
  printArray(C, M+N);
}
