# Programming Lab 2
Write the definition for a class called Rectangle that has floating point data members length and width. The class has the following member functions:
```
  void setlength(float) // to set the length data member

  void setwidth(float) // to set the width data member

  float perimeter() // to calculate and return the perimeter of the rectangle

  float area() // to calculate and return the area of the rectangle

  void show() // to display the length and width of the rectangle

  int sameArea(Rectangle) // that has one parameter of type Rectangle. sameArea returns 1 if the two Rectangles have the same area, and returns 0 if they don't.
```
1. Write the definitions for each of the above member functions in C++.

2. Write main function to create two rectangle objects. Set the length and width of the first rectangle to 5 and 2.5. Set the length and width of the second rectangle to 5 and 18.9. Display each rectangle and its area and perimeter.

3. Check whether the two Rectangles have the same area and print a message indicating the result. Set the length and width of the first rectangle to 15 and 6.3. Display each Rectangle and its area and perimeter again. Again, check whether the two Rectangles have the same area and print a message indicating the result.

## Video Walkthrough and Demo
[![PL02 Demo](http://img.youtube.com/vi/HHDPqPzvOVU/0.jpg)](https://www.youtube.com/watch?v=HHDPqPzvOVU "PL02 Demo")

## Project Location
- https://github.com/clarkngo/cpp-projects/tree/master/programming-labs-cs555/Module02

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
- Mac: `./rectangles.out`
- Windows powershell: `./rectangles.exe`
- Windows cmd: `rectangles.exe`

## Project Requirements
- C++
- Class `Rectangle`
- data members `length` and `width`
- member functions:
  - `void setlength(float)`
  - `void setwidth(float)`
  - `float perimeter(float)`
  - `float area(float)`
  - `void show(float)`
  - `int sameArea(Rectangle)`
- main function:
  - 1st `Rectangle` object with `length` and `width` of `5` and `2.5`
  - 2nd `Rectangle` object with `length` and `width` of `5` and `18.9`
  - Display area and perimeter
  - check if the two rectangles has the same area, print results
  - set `length` and `width` of 1st `Rectangle` object to `15` and `6.3`
  - check if the two rectangles has the same area, print results
  - Display area and perimeter

## UI Requirements
- print output in console

## Program Flow
- Execute program
  - Creates object from class `Rectangle`
  - Creates another object from class `Rectangle`
  - Set `length` and `width` for 2 Rectangle objects
  - Display area and perimeter for both
  - Display 2 Rectangles have the same area
  - Reset `length` and `width` of 1st Rectangle object
  - Display 2 Rectangles have the same area
- End of Program

# Future Improvements
Renaming of functions:
- From `setlength` to `setLength`
- From `setwidth` to `setWidth`
- From `area` to `calculateArea`
- From `perimeter` to `calculatePerimeter`
- From `show` to `printAreaAndPerimeter`
- From `sameArea` to `isSameArea`

# Support
Bug reports and feature requests can be filed with the rest for the Ruby on Rails project here:

[File Bug Reports and Features](https://github.com/clarkngo/cpp-projects/issues)
# License
Released under the MIT license.

# Copyright
&copy; Copyright 2019 Clark Jason Ngo. All Rights Reserved.
