# MacOS C++ Project Setup in VS Code

## How to Use
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
