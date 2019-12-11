# Programming Lab 9
Write a C++ program to print all the non-repeated numbers in an array in minimum time complexity. For example,

(user input) Array length: 10

Array input: 2 5 3 2 4 5 3 6 7 3

Output:

Non-repeated numbers are: 7, 6, 4

## Video Walkthrough and Demo
[![PL09 Demo](http://img.youtube.com/vi/WILL_BE_UPDATED/0.jpg)](https://www.youtube.com/watch?v=WILL_BE_UPDATED "PL09 Demo")

## Project Location
- https://github.com/clarkngo/cpp-projects/tree/master/programming-labs-cs555/Module09

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
- Mac: `./main.out`
- Windows powershell: `./main.exe`
- Windows cmd: `main.exe`

## Project Requirements
- C++

## File Structure
- `Array.h` header file
- `Array.cpp` implementation file
- `main.cpp` main program

## UI Requirements
- print output in console

## Program Flow
- Execute main program
  - Declare a constant integer variable and assign a value
  - Declare an integer array and assign 10 elements
  - Print elements in the array
  - Sort array using quick sort from library
  - Print elements in the sorted array
  - Print non-repeated numbers in the sorted array
- End of Program

# Lessons Learned

# Future Improvements

# Classroom Learnings

# Support
Bug reports and feature requests can be filed here:

[File Bug Reports and Features](https://github.com/clarkngo/cpp-projects/issues)
# License
Released under the MIT license.

# Copyright
&copy; Copyright 2019 Clark Jason Ngo. All Rights Reserved.
