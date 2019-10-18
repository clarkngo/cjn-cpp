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

void sortArr(int arr[])
{

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

int main()
{
  srand (time(NULL));   // to have true randomnesss
  const int M = 5;
  const int N = 5;
  int A[M];
  int B[N];

  populateArray(A, M);

  // void qsort (void* base, size_t num, size_t size,	int (*comparator)(const void*,const void*));
  qsort (A, M, sizeof(int), compareAscending);  // Quick Sort from C library
  cout << "Array A: ";
  printArray(A, M);

  populateArray(B, N);
  qsort (B, N, sizeof(int), compareDescending);  // Quick Sort from C library
  cout << "Array B: ";
  printArray(B, M);
}
