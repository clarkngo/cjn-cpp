# Programming Lab 5
Write a C++ program to implement the Number Guessing Game. In this game the computer chooses a random number between 1 and 100, and the player tries to guess the number in as few attempts as possible. Each time the player enters a guess, the computer tells him whether the guess is too high, too low, or right. Once the player guesses the number, the game is over.

## Video Walkthrough and Demo
[![PL05 Demo](http://img.youtube.com/vi/TO_BE_UPDATED/0.jpg)](https://www.youtube.com/watch?v=TO_BE_UPDATED "PL05 Demo")

## Project Location
- https://github.com/clarkngo/cpp-projects/tree/master/programming-labs-cs555/Module05

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
Error:
```
Undefined symbols for architecture x86_64:
  "GuessingGame::getPlayerNum()", referenced from:
      _main in main-2b5050.o
  "GuessingGame::GuessingGame()", referenced from:
      _main in main-2b5050.o
ld: symbol(s) not found for architecture x86_64
clang: error: linker command failed with exit code 1 (use -v to see invocation)
The terminal process terminated with exit code: 1
```
`tasks.json` with linker error
```
"args": [
    "-std=c++17",
    "-stdlib=libc++",
    "main.cpp",
    "-o",
    "main.out",
    "--debug"
],
```
`tasks.json` adding the other `.cpp` file (`guess.cpp`) to compile as an additional argument to compile.
```
"args": [
    "-std=c++17",
    "-stdlib=libc++",
    "main.cpp",
    "guess.cpp",
    "-o",
    "main.out",
    "--debug"
],
```
Source:
- Error “ld: symbol not found for architecture x86_64”
- Source: https://medium.com/@m.muizzsuddin_25037/error-ld-symbol-not-found-for-architecture-x86-64-a5e5b648ffc

# Future Improvements
- create a helper function for converting minutes that are equal or greater than 60 to add 1 hour

# Support
Bug reports and feature requests can be filed here:

[File Bug Reports and Features](https://github.com/clarkngo/cpp-projects/issues)
# License
Released under the MIT license.

# Copyright
&copy; Copyright 2019 Clark Jason Ngo. All Rights Reserved.
