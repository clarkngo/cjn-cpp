# Programming Lab 5
Write a C++ program to implement the Number Guessing Game. In this game the computer chooses a random number between 1 and 100, and the player tries to guess the number in as few attempts as possible. Each time the player enters a guess, the computer tells him whether the guess is too high, too low, or right. Once the player guesses the number, the game is over.

## Video Walkthrough and Demo
[![PL05 Demo](http://img.youtube.com/vi/QnneGAf1cfU/0.jpg)](https://www.youtube.com/watch?v=QnneGAf1cfU "PL05 Demo")

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
- Mac: `./main.out`
- Windows powershell: `./main.exe`
- Windows cmd: `main.exe`

## Project Requirements
- C++

## File Structure
- `guess.h` header file
- `guess.cpp` implementation file
- `main.cpp` main program

## UI Requirements
- user input in console
- print output in console

## Program Flow
- Execute main program
- Intialize a `Guessing Game` object
- Run the `Guessing Game` object
  - Message prompt
  - Keep asking user input if
    - does not meet input validation
    - wrong guess
      - prompted `Too high!` if `guess > winningNum`
      - prompted `Too low!` if `guess < winningNum`
  - if user input matches `winningNum`
  - prompt user `You win! ＼(＾O＾)／`
- End of Program

# Lessons Learned
I was messing with ternary operators and trying to return a boolean value.

Error:
```
guess.cpp:38:33: warning: expression result unused [-Wunused-value]
    _playerNum == _winningNum ? true : false;
                                ^~~~
guess.cpp:39:1: warning: control reaches end of non-void function [-Wreturn-type]
```
Code with error:
```
bool GuessingGame::isWinner()
{
    _playerNum == _winningNum ? true : false;
}
```
Code that fixes error:
```
bool GuessingGame::isWinner()
{
    return _playerNum == _winningNum ? true : false;
}
```

# Future Improvements
- Have the `setPlayerNum()` function require a parameter
- Use `try-catch` blocks

# Classroom Learnings
- Use a `const` in a getter function
```
int getX() const
{
  return x;
}
```
Note: calling non-const within a const function will throw an error

# Support
Bug reports and feature requests can be filed here:

[File Bug Reports and Features](https://github.com/clarkngo/cpp-projects/issues)
# License
Released under the MIT license.

# Copyright
&copy; Copyright 2019 Clark Jason Ngo. All Rights Reserved.
