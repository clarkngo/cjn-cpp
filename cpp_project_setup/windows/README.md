# Windows C++ Project Setup in VS Code

## Workflow

1 -	Copy .vscode and add to your project folder

2 -	Modify `launch.json`. Your program path should be `${workspaceFolder}/yourfilename.out`. Hit save.

3 -	Modify `tasks.json`. Your arguments should include `yourfilename.cpp` and `yourfilename.out`. Hit save.

## Step by Step
- Click `.vscode.zip`
- Click Download
- Choose the location of your project folder

Sample working C++ project directory structure:
```
| hello
|_ .vscode
 |_ c_cpp_properties.json
 |_ launch.json 
 |_ tasks.json
|_ hello.cpp
```

Note: You have to have `.vscode` folder and files in every C++ project folder.

## Modifying for Project Use
- To easily use this, just replace `filename` with your own, i.e. change to `hello`.
- In `launch.json`: 
```
            "program": "${workspaceFolder}/filename.exe"
```
- In `tasks.json`:
```
            "args": [
                "-g",
                "-o",
                "filename",
                "filename.cpp"
```

## Contents of the Files

The following files are included in .vscode:

`c_cpp_properties.json`

```
{
    "configurations": [
        {
            "name": "Win32",
            "includePath": [
                "${workspaceFolder}/**"
            ],
            "defines": [
                "_DEBUG",
                "UNICODE",
                "_UNICODE"
            ],
            "intelliSenseMode": "gcc-x64",
            "compilerPath": "C:\\mingw-w64\\i686-8.1.0-posix-dwarf-rt_v6-rev0\\mingw32\\bin\\g++.exe"
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
            "name": "(gdb) Launch",
            "type": "cppdbg",
            "request": "launch",
            "program": "${workspaceFolder}/filename.exe",
            "args": [],
            "stopAtEntry": true,
            "cwd": "${workspaceFolder}",
            "environment": [],
            "externalConsole": true,
            "MIMode": "gdb",
            "miDebuggerPath": "C:\\mingw-w64\\i686-8.1.0-posix-dwarf-rt_v6-rev0\\mingw32\\bin\\gdb.exe",
            "setupCommands": [
                {
                    "description": "Enable pretty-printing for gdb",
                    "text": "-enable-pretty-printing",
                    "ignoreFailures": true
                }
            ]
        }
    ]
}
```

`tasks.json`

```
{
    "version": "2.0.0",
    "tasks": [
        {
            "label": "build hello world",
            "type": "shell",
            "command": "g++",
            "args": [
                "-g",
                "-o",
                "filename",
                "filename.cpp"
            ],
            "group": {
                "kind": "build",
                "isDefault": true
            }
        }
    ]
}
```
