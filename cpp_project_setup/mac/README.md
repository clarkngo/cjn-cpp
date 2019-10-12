# MacOS C++ Project Setup in VS Code

# Initial Setup
Installing C++ extension for VS Code
1)	Open your VS Code. On the left side bar, click Extensions Icon. A search field will pop up, type c++ in the search field then hit Enter. A list will populate below the search field. Click C/C++ then a description on the right will appear. Click Install.


Working in the project folder

1)	Open VS Code.

<img src="/images/01.png" width="400" height="500"/>



2)	Go to the project folder: CS555_FALL_2019/IN/FirstnameLastname/

If you are an online student:
Open CS555_Fall_2019/ON/FirstnameLastname. ( File > Open )

If you are an onsite student:
Open CS555_Fall_2019/IN/FirstnameLastname. ( File > Open )

3)	Create a folder Module1 and go inside that folder.
>>>mkdir Module1
>>>cd Module1



1)	Go to CS555_FALL_2019/yourfirstname-lastname/Module1. Open your VS Code with Module1 project folder. You can use the command below or open the folder using Step 2.
>>> code .


For MacOS users

Full installation reference: https://code.visualstudio.com/docs/cpp/config-clang-mac

1)	Open your VS Code.
2)	Click Open Folder.

If you are an online student:
Open CS555_Fall_2019/ON/Yourname/Module1. ( File > Open )

If you are an onsite student:
Open CS555_Fall_2019/IN/Yourname/Module1. ( File > Open )

3)	Configure the compiler path. Press ⇧⌘P to open the Command Palette. It looks like this:



4)	Start typing "C/C++" and then choose Edit Configurations (UI) from the list of suggestions.

5)	Make sure Configuration Name is set to Mac. Compiler path is set to /usr/bin/clang. Intellisense mode set to ${default}.



6)	This should create a c_cpp_properties.json file.



7)	Create the file launch.json and add the following code:

Code here:
https://gist.githubusercontent.com/clarkngo/f6639a7c0627314671b820a86e913fa3/raw/847cd4618e2b6f87e3554ebed42681a9368d30f6/launch.json



8)	Create the file tasks.json and add the following code:
 
Code here:
https://gist.github.com/clarkngo/f6639a7c0627314671b820a86e913fa3#file-tasks-json




9)	You should have this project directory:



Our first Hello

1)	Create a new file by right clicking anywhere below the files.




2)	Create a hello.cpp file. Please add the following code:



3)	In the VS Code menu, click Terminal > Run Build Task.




You should see this output:



Click anywhere in the terminal to close the message.


New files will be created.



4)	Run the compiled c++ file (.out)

>>>./hello.out


## Workflow

1 -	Copy .vscode and add to your project folder

2 -	Modify `launch.json`. Your program path should be `${workspaceFolder}/yourfilename.out`. Hit save.

3 -	Modify `tasks.json`. Your arguments should include `yourfilename.cpp` and `yourfilename.out`. Hit save.

## Step by Step
- Click `.vscode.zip`
- Click Download
- Choose the location of your project folder

Sample working C++ project directory structure
```
| hello
|_ .vscode
 |_ c_cpp_properties.json
 |_ launch.json
 |_ settings.json
 |_ tasks.json
|_ hello.cpp
```

Note: You have to have `.vscode` folder and files in every C++ project folder.

## Modifying for Project Use
- To easily use this, just replace `filename` with your own, i.e. change to `hello`.
- In `launch.json`:
```
            "program": "${workspaceFolder}/filename.out",
```
- In `tasks.json`:
```
            "args": [
                "-std=c++17",
                "-stdlib=libc++",
                "filename.cpp",
                "-o",
                "filename.out",
                "--debug"
```

## Contents of the Files

The following files are included in .vscode:

`c_cpp_properties.json`

```
{
    "configurations": [
        {
            "name": "Mac",
            "includePath": [
                "${workspaceFolder}/**"
            ],
            "defines": [],
            "macFrameworkPath": [],
            "compilerPath": "/usr/bin/clang",
            "cStandard": "c11",
            "cppStandard": "c++17",
            "intelliSenseMode": "${default}"
        }
    ],
    "version": 4
}
```

`launch.json`

```
{
    "version": "0.2.0",
    "configurations": [
        {
            "name": "(lldb) Launch",
            "type": "cppdbg",
            "request": "launch",
            "program": "${workspaceFolder}/filename.out",
            "args": [],
            "stopAtEntry": true,
            "cwd": "${workspaceFolder}",
            "environment": [],
            "externalConsole": true,
            "MIMode": "lldb",
            "logging": {
                "trace": true,
                "traceResponse": true,
                "engineLogging": true
            }
        }
    ]
  }
```

`settings.json`

```
{
  "files.associations": {
    "*.html": "html",
    "ostream": "cpp"
  }
}
```

`tasks.json`

```
{
    "version": "2.0.0",
    "tasks": [
        {
            "label": "Build with Clang",
            "type": "shell",
            "command": "clang++",
            "args": [
                "-std=c++17",
                "-stdlib=libc++",
                "filename.cpp",
                "-o",
                "filename.out",
                "--debug"
            ],
            "group": {
                "kind": "build",
                "isDefault": true
            }
        }
    ]
}
```
