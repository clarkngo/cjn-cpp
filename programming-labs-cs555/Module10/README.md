# Programming Lab 10
There are 2 parts in this assignment.

(1) Give the necessary declaration of a linked list implemented queue containing float type values. Also write a user-defined function in C++ to delete a float type number from the queue.

(2) Each node of a STACK contains the following information, in addition to required pointer field :

i) Roll number of the student

ii) Age of the student

    Give the structure of node for the linked stack in question TOP is a pointer which points to the topmost node of the STACK. Write the following functions.

i) PUSH() - To push a node to the stack which is allocated dynamically

ii) POP() - To remove a node from the stack and release the memory.

## Video Walkthrough and Demo
[![PL10 Demo](http://img.youtube.com/vi/WILL_BE_UPDATED/0.jpg)](https://www.youtube.com/watch?v=WILL_BE_UPDATED "PL10 Demo")

## Project Location
- https://github.com/clarkngo/cpp-projects/tree/master/programming-labs-cs555/Module10

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
- `.h` header file
- `.cpp` implementation file
- `main.cpp` main program

## UI Requirements
- user input in console
- print output in console

## Program Flow
- Execute main program
- /* 1st Program */
  - create empty queue
  - add node to the back of the queue using enqueue
  - add node to the back of the queue using enqueue
  - remove node from the front of the queue using dequeue and assign it to a new node
  - if node has value
    - print out node's value

- /* 2nd Program */
  - create empty stack
  - add student number and student age as a node and push at the top of the stack
  - add student number and student age as a node and push at the top of the stack
  - remove the node from the top of the stack and assign it to a new node
  - if node has value
    -	print out node's value

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
