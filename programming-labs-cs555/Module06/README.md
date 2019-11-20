# Programming Lab 6

NOTE: This Programming Lab was done in classroom with a different problem.

Answer the questions (i) to (iv) based on the following:
```
class Publisher
{
    char pub[12];
    double turnover;

    protected:
        void register();

    public:
        Publisher();
        void enter();
        void display();
};

class Branch
{
    char city[20];

    protected:
        float employees;

    public:
        Branch();
        void haveit();
        void giveit();
};

class Author : private Branch, public Publisher
{
    int acode;
    char aname[20];
    float amount;

    public:
        Author();
        void start();
        void show();
};
```
i. Write the names of data members, which are accessible from objects belonging to class Author.

ii. Write the names of all the member functions which are accessible from objects belonging to class Branch.

iii. Write the names of all the members which are accessible from member functions of class Author.

iv. How many bytes will be required by an object belonging to class Author?

## Video Walkthrough and Demo
[![PL06 Demo](http://img.youtube.com/vi/WILL_BE_UPDATED/0.jpg)](https://www.youtube.com/watch?v=WILL_BE_UPDATED "PL06 Demo")

## Project Location
- https://github.com/clarkngo/cpp-projects/tree/master/programming-labs-cs555/Module06

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
- Answer the questions

i. Write the names of data members, which are accessible from objects belonging to class Author.

From class Author:
```
    int acode;
    char aname[20];
    float amount;

	public:
		Author();
		void start();
		void show();
```

ii. Write the names of all the member functions which are accessible from objects belonging to class Branch.

iii. Write the names of all the members which are accessible from member functions of class Author.

iv. How many bytes will be required by an object belonging to class Author?

## File Structure
- `publish.h` header file
- `publish.cpp` implementation file
- `main.cpp` main program

## UI Requirements
- user input in console
- print output in console

## Program Flow
- Execute main program

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
