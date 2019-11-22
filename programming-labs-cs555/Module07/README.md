# Programming Lab 7
Assuming that a text file named FIRST.TXT contains some text written into it, write a class and a method named vowelwords(), that reads the file FIRST.TXT and creates a new file named SECOND.TXT, to contain only those words from the file FIRST.TXT which start with a lowercase vowel (i.e., with 'a', 'e', 'i', 'o', 'u'). For example, if the file FIRST.TXT contains Carry umbrella and overcoat when it rains Then the file SECOND.TXT shall contain umbrella and overcoat it.

## Video Walkthrough and Demo
[![PL07 Demo](http://img.youtube.com/vi/WILL_BE_UPDATED/0.jpg)](https://www.youtube.com/watch?v=WILL_BE_UPDATED "PL07 Demo")

## Project Location
- https://github.com/clarkngo/cpp-projects/tree/master/programming-labs-cs555/Module07

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
- `VowelWords.h` header file
- `VowelWords.cpp` implementation file
- `main.cpp` main program
- `FIRST.txt` from https://studywebdevelopment.com/web-development-basics-for-beginners.html
- `SECOND.txt` would have texts from `FIRST.txt` excluding words that don't start with lower case vowels

## UI Requirements
- none

## Program Flow
- Execute main program
- Create an object `VowelWords` that requires two parameters for its constructor:
  - 1st: file to be read
  - 2nd: file to be created with filtered contents of 1st parameter
- Execute `run()` of `VowelWords`
  - create a `bool` variable name `result` and assign the value from `getFileContent`
    - `getFileContent` requires two parameters:
      - 1st: `string` filename
      - 2nd: `vector<string> & vecOfStrs`
      - open the file
      - check if object (file) is valid, if not `return false`
      - read word per word (`string`) from the filename and add each word to the vector (`<string>`)
      - close the file
  - check if `result` is `true`
    - declare a new `vector<string>`, where we would pass the filtered contents
    - iterate over the original `vector<string>`
      - check if first letter of a word is lower case
        - push new word that starts with vowel lower case to new `vector<string>`
    - copy new `vector<string>` to a new file
- End of Program

# Lessons Learned
## Copy a file and create a new file
```
#include <fstream>
using namespace std;

ifstream  src("example1.txt", ios::binary);
ofstream  dst("example2.txt", ios::binary);
dst << src.rdbuf();
```
## Write vector values to a file
```
#include <fstream>
#include <iterator>
#include <string>
#include <vector>
using namespace std;

vector<string> example;
example.push_back("this");
example.push_back("is");
example.push_back("a");
example.push_back("test");

ofstream output_file("./example3.txt");
ostream_iterator<string> output_iterator(output_file, "\n");
copy(example.begin(), example.end(), output_iterator);
```
## Open the file and output to console
```
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

/*
 * It will iterate through all the lines in file and
 * put them in given vector
 */
bool getFileContent(string fileName, vector<string> & vecOfStrs)
{

	// Open the File
	ifstream in(fileName.c_str());

	// Check if object is valid
	if(!in)
	{
		cerr << "Cannot open the File : "<<fileName<<endl;
		return false;
	}

	string str;
	// Read the next line from File untill it reaches the end.
	while (getline(in, str))
	{
		// Line contains string of length > 0 then save it in vector
		if(str.size() > 0)
			vecOfStrs.push_back(str);
	}
	//Close The File
	in.close();
	return true;
}

int main()
{
	vector<string> vecOfStr;

	// Get the contents of file in a vector
	bool result = getFileContent("example.cpp", vecOfStr);

	if(result)
	{
		// Print the vector contents
		for(string & line : vecOfStr)
			cout<<line<<endl;
	}
}
```

# Future Improvements

# Classroom Learnings

# Support
Bug reports and feature requests can be filed here:

[File Bug Reports and Features](https://github.com/clarkngo/cpp-projects/issues)
# License
Released under the MIT license.

# Copyright
&copy; Copyright 2019 Clark Jason Ngo. All Rights Reserved.
