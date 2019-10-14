# Programming Lab 1
In plain English and drawings (aka flow chart), design classes that calculate the area of circle and rectangle. You are answering how your program would (1) prompt a user to select either "circle" or "rectangle" followed by asking the necessary dimensions. Once the user enters the valid input, the program then calculates the area and prints the final value. If not a valid input, you can utilize a while loop or infinite loop.

## Video Walkthrough and Demo
[![PL01 Demo](http://img.youtube.com/vi/Fec5_JdnzZs/0.jpg)](https://www.youtube.com/watch?v=Fec5_JdnzZs "PL01 Demo")


## Project Location
- https://github.com/clarkngo/cpp-projects/tree/master/programming-labs-cs555/Module01

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
- Mac: `./circ_rect.out`
- Windows powershell: `./circ_rect.exe`
- Windows cmd: `circ_rect.exe`

## Project Requirements
- C++
- message prompt
- user input
- print output
- input data validation: `circle` or `rectangle`
- function that calculates area of circle
- function that calculates area of rectangle

## UI Requirements
- get user input from console
- error output for invalid input
- print output in console

## Program Flow
### Original branch
- 1  - Get user input of `c` or `r` as `char` data type.
- 2  - If user input is invalid, go back to step `1`.
- 3  - If user input is `c`, go to step `4a`, else, go to step `4b`.

### Branch `a`
- 4a - ask user input of any number as `double` data type.
- 5a - If user input is invalid, go back to step `4a`.
- 6a - area of circle is calculated using `area()` and show output to user.
### Branch `b`
- 4b - ask user input of any number as `double` data type.
- 5b  - If user input is invalid, go back to step `4b`.
- 6b - ask user input of any number as `double` data type.
- 7b  - If user input is invalid, go back to step `6b`.
- 8b - area of rectangle is calculated using `area()` and show output to user.

### Back to original branch
- End of Program

# Support
Bug reports and feature requests can be filed with the rest for the Ruby on Rails project here:

[File Bug Reports and Features](https://github.com/clarkngo/cpp-projects/issues)
# License
Released under the MIT license.

# Copyright
&copy; Copyright 2019 Clark Jason Ngo. All Rights Reserved.