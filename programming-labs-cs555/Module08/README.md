# Programming Lab 8
There are 3 separate programs.

(1) Write a C++ program which accepts days as integer and display total number of years, months and days in it. For example : If user input as 856 days the output should be 2 years 4 months 6 days. (1 year = 365 days, no leap year are assumed.)

(2) Write a C++ program to check whether the year provided by a user is a leap year or not.

(3) Write a C++ program to check an input string by user is palindrome or not (both odd and even).

For programming assignment, 3 cpp files are to be uploaded (no header, no zip, no rar) with sufficient documentation in the cpp files so that I can understand your logic to solve these 3 problems.

## Video Walkthrough and Demo
[![PL08 Demo](http://img.youtube.com/vi/AKLnVPu9evg/0.jpg)](https://www.youtube.com/watch?v=AKLnVPu9evg "PL08 Demo")

## Project Location
- https://github.com/clarkngo/cpp-projects/tree/master/programming-labs-cs555/Module08

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
Note: header files are omitted as requirement

- `Date.cpp` implementation file
- `Leap.cpp` implementation file
- `Palindrome.cpp` implementation file

## UI Requirements
- user input in console
- print output in console

## Program Flow
### Program (1) Days to Date converter
- Execute main program
  - Create `Date` object
  - Ask user input as integer `days`
    - If input is not integer or more than max value of integer
      - keep prompting the user for new input
  - Set years, months, and days according to Date format
    - 0 < months <= 12
    - 0 < days <= 30
  - Output to Date to user
- End of Program
### Program (2) Check if Leap Year
- Execute main program
  - Create `Leap` object
  - Ask user input as integer `years`
    - If input is not integer or more than max value of integer
      - keep prompting the user for new input
  - Check if Leap Year and set a boolean variable `isLeapYear` to either `true` or `false`
  - Print results
- End of Program
### Program (3) Check if Palindrome
- Execute main program
  - Create `Palindrome` object
  - Ask user input as string `word`
  - Check if word is Palindrome or not and set a boolean variable `isPalindrome` to either `true` or `false`
  - Print results
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
