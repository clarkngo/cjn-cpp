# Programming Lab 4
Write the definition for a class in C++ called time that has hours and minutes as integer. The class has the following member functions:
```
void settime(int, int) // to set the specified value in object

void showtime() // to display time object

time sum(time) // to sum two time object & return time
```
1. Write the definitions for each of the above member functions.

2. Write main function to create three time objects. Set the value in two objects and call sum() to calculate sum and assign it in third object. Display all time objects.

## Video Walkthrough and Demo
[![PL04 Demo](http://img.youtube.com/vi/VumClstM4AA/0.jpg)](https://www.youtube.com/watch?v=VumClstM4AA "PL04 Demo")

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
- Mac: `./time.out`
- Windows powershell: `./time.exe`
- Windows cmd: `time.exe`

## Project Requirements
- C++

## UI Requirements
- print output in console

## Program Flow
- Execute program
- Declare three `Time` objects named `time1`, `time2`, and `time3`
- Set `time1` with hours and minutes
- Set `time2` with hours and minutes
- Assign the sum of `time1` and `time2` to `time3`
- Display `time1`, `time2`, and `time3`
- End of Program

# Lessons Learned
- use of `typedef` to create a type `time`
```
typedef Time time;
```
- adding two object's integer variable data members
```
time sum(Time time) // to sum two time object & return time
{
    Time time_sum;
    time_sum._hours = Time::_hours + time._hours;
    time_sum._minutes = Time::_minutes + time._minutes;
    return time_sum;
}
```
# Future Improvements
- create a helper function for converting minutes that are equal or greater than 60 to add 1 hour

# Support
Bug reports and feature requests can be filed here:

[File Bug Reports and Features](https://github.com/clarkngo/cpp-projects/issues)
# License
Released under the MIT license.

# Copyright
&copy; Copyright 2019 Clark Jason Ngo. All Rights Reserved.
