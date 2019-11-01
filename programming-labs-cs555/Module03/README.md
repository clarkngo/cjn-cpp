# Programming Lab 3
Suppose A, B, C are arrays of integers of size M, N, and M + N respectively. Each array will get populated by random generator ranging from 0 to 1000. The numbers in array A appear in ascending order (if not in order, use a built-in qsort) while the numbers in array B appear in descending order. Write a user defined function in C++ to produce third array C by merging arrays A and B in ascending order. Use A, B and C as arguments in the function.

## Video Walkthrough and Demo
[![PL03 Demo](http://img.youtube.com/vi/F4Lnhvygryg/0.jpg)](https://www.youtube.com/watch?v=F4Lnhvygryg "PL03 Demo")

## Project Location
- https://github.com/clarkngo/cpp-projects/tree/master/programming-labs-cs555/Module03

## Software requirements
- C++17
- Compiler
  - Mac: clang 10.0.0
    - Check clang version:
    - `echo | clang -dM -E - | grep __clang`
  - Windows: mingw-w64 v3.1.0

## Setup your development environment / Installation
Please follow instructions on:
- Mac: https://github.com/clarkngo/cpp-projects/tree/master/cpp_project_setup/mac
- Windows: https://github.com/clarkngo/cpp-projects/tree/master/cpp_project_setup/windows

## Compile and Run the Project
1. If a Windows user, please replace `.vscode` contents with `windows/.vscode`.
2. VS Code Menu > Terminal > Run Build Task
3. Run
- Mac: `./sort_merge_arrays.out`
- Windows powershell: `./sort_merge_arrays.exe`
- Windows cmd: `sort_merge_arrays.exe`

## Project Requirements
- C++

## UI Requirements
- print output in console

## Program Flow
- Execute program
- sets the seed which is used by rand to generate “random” numbers
- declare and initialize variables M, N with value of `5`
- initialize arrays:
  - `A` with length of `M`
  - `B` with length of `N`
  - `C` with length of `M + N`
- Array `A`:
  - call `populateArray()` function to add random numbers to array `A`
  - call `qsort()` function from C library to sort array `A` ascending.
  - call `printArray()` function to print elements of array `A`
  populateArray(A, M);
- Array `B`:
  - call `populateArray()` function to add random numbers to array `B`
  - call `qsort()` from C library to sort array `B` descending.
  - call `printArray()` function to print elements of array `B`
- Array `C`:
  - call `mergeArrays()` function to merge array `A` and `B`
  - call `qsort()` from C library to sort array `C` ascending.
  - call `printArray()` function to print elements of array `C`
- End of Program

# Errors Encountered
- Segmentation fault: 11 on assigned 1 value to 2 variables

# Lessons Learned
`qsort()` in C
- The key point about qsort() is comparator function comparator. The comparator function takes two arguments and contains logic to decide their relative order in sorted output.
- The comparator function takes two pointers as arguments (both type-casted to const void*) and defines the order of the elements by returning (in a stable and transitive manner
- Source: https://www.geeksforgeeks.org/comparator-function-of-qsort-in-c/

```
int comparator (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
```
- the `comparator` function type-casts the parameters as void (undefined data type) and accesses the value through pointers
- in the `return` statement, the parameter are type-casted to `int`

`void *`
- When used as a function return type, the void keyword specifies that the function does not return a value. When used for a function's parameter list, void specifies that the function takes no parameters. When used in the declaration of a pointer, void specifies that the pointer is "universal."
- If a pointer's type is void *, the pointer can point to any variable that is not declared with the const or volatile keyword. A void pointer cannot be dereferenced unless it is cast to another type. A void pointer can be converted into any other type of data pointer.
- Source: https://docs.microsoft.com/en-us/cpp/cpp/void-cpp?view=vs-2019

Using `const` and `*` deference operator
- `const int *var;`
- `const` is a contract. By receiving a `const int *` parameter, you "tell" the caller that you (the called function) will not modify the objects the pointer points to.
- A `const void*` means a pointer to some data that cannot be changed. In order to read it, yes, you have to cast it to concrete types such as `char`. But I said reading, not writing, which, again, is UB (Undefined Behavior).
- Source: https://stackoverflow.com/questions/34842224/when-to-use-const-void

# From Classroom Session
Stack = if you know the size
Heap = if you don’t know the size

PRS = Pass-by-Reference is Shallow Copy
-	Are always address
-	Keeps the value

PBV = Pass-by-Value is Deep Copy

Array are pass-by-reference

```
int arr[10];
cout << arr; // mem address
```
If you need to pass them to functions, you need to have `int* p` as parameter

Length of array = `int a[10] / sizeof(a[0])`

or

Length of array = `int a[10] / sizeof(int)`

when an array is passed in a function you can only get the memory address of the first element.



# Future Improvements



# Support
Bug reports and feature requests can be filed here:

[File Bug Reports and Features](https://github.com/clarkngo/cpp-projects/issues)
# License
Released under the MIT license.

# Copyright
&copy; Copyright 2019 Clark Jason Ngo. All Rights Reserved.
