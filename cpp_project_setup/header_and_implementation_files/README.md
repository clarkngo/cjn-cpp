# Modifying for Project Use with Header and Implementation files

Given an example, let's say in our `project1` folder we have `addition.h`, `addition.cpp`, and `main.cpp`:
1. Go to `.vscode` and edit `tasks.json`
2. add an addition argument in `args` with `addition.cpp`
3. Build/Compile
4. Run

## MacOS `tasks.json`
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
                "main.cpp",
                "addition.cpp",
                "-o",
                "main.out",
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
## Windows `tasks.json`
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
                "main",
                "main.cpp",
                "addition.cpp"
            ],
            "group": {
                "kind": "build",
                "isDefault": true
            }
        }
    ]
}
```