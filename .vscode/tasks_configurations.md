# VS Code Tasks Configuration for DSA Programs

## Linux Configuration
```json
{
  "version": "2.0.0",
  "tasks": [
    {
      "label": "Compile and Run DSA Program (Linux)",
      "type": "shell",
      "command": "bash",
      "args": [
        "-c",
        "cd \"${fileDirname}\" && g++ \"${file}\" -std=c++20 -O2 -Wall -o \"${fileBasenameNoExtension}\" && ./\"${fileBasenameNoExtension}\" < \"${workspaceFolder}/input.txt\" > \"${workspaceFolder}/output.txt\" && rm \"${fileBasenameNoExtension}\""
      ],
      "presentation": {
        "reveal": "always",
        "panel": "shared"
      },
      "group": {
        "kind": "build",
        "isDefault": true
      },
      "problemMatcher": [
        "$gcc"
      ]
    }
  ]
}
```

## macOS Configuration
```json
{
  "version": "2.0.0",
  "tasks": [
    {
      "label": "Compile and Run DSA Program (Root IO)",
      "type": "shell",
      "command": "bash",
      "args": [
        "-c",
        "cd \"${fileDirname}\" && g++ \"${file}\" -std=c++20 -O2 -Wall -o \"${fileBasenameNoExtension}\" && ./\"${fileBasenameNoExtension}\" < \"${workspaceFolder}/input.txt\" > \"${workspaceFolder}/output.txt\" && rm \"${fileBasenameNoExtension}\""
      ],
      "presentation": {
        "reveal": "always",
        "panel": "shared"
      },
      "group": {
        "kind": "build",
        "isDefault": true
      },
      "problemMatcher": ["$gcc"]
    }
  ]
}
```

## Windows Configuration
```json
{
  "version": "2.0.0",
  "tasks": [
    {
      "label": "Compile and Run DSA Program (Root IO)",
      "type": "shell",
      "command": "cmd.exe",
      "args": [
        "/c",
        "pushd \"${fileDirname}\" && g++ \"${file}\" -std=c++20 -O2 -Wall -o \"${fileBasenameNoExtension}.exe\" && \"${fileBasenameNoExtension}.exe\" < \"${workspaceFolder}\\input.txt\" > \"${workspaceFolder}\\output.txt\" && del \"${fileBasenameNoExtension}.exe\" && popd"
      ],
      "presentation": {
        "reveal": "always",
        "panel": "shared"
      },
      "group": {
        "kind": "build",
        "isDefault": true
      },
      "problemMatcher": ["$gcc"]
    }
  ]
}
```

### Usage Instructions:
1. Create `input.txt` and `output.txt` files in the root of your project
2. Copy the appropriate configuration for your operating system
3. Paste it into your `.vscode/tasks.json` file
4. Press **Ctrl + Shift + B** to compile and run your C++ DSA program
5. The task will read from `input.txt` and write output to `output.txt`

### Key Features:
- Compiles with C++20 standard and optimization (-O2)
- Automatically handles input.txt and output.txt files
- Cleans up compiled executables after execution
- Uses shared panel for output display