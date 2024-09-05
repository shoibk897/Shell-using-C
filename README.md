# BhaiShell

## Overview

**BhaiShell** is a custom shell implementation written in C. It provides a command-line interface where users can execute built-in commands and manage processes. This project demonstrates basic shell functionalities and process handling in C.

## Running

To run BhaiShell, follow these steps:

## Getting Started

    **

   1. **Clone the repository to your local machine**

   ```bash
   git clone https://github.com/shoibk897/C.git
   ```
   
   2. **Navigate to the project directory**

   ```bash
   cd bhaiShell
   ```
   
   3. **Compile and run the project**

   ```bash
    ./runShell.sh
   ```
Here's how you can include instructions in your `README.md` file for users to configure their VS Code `c_cpp_properties.json` to recognize all necessary file paths for your project:

---

## VS Code Configuration

To ensure that VS Code can recognize all the necessary file paths for this shell project, you need to update the `c_cpp_properties.json` file in the `.vscode` directory. This allows VS Code to know where to look for header files and source code.

### Steps to configure:

1. Open VS Code.
2. If you don't have a `.vscode` folder in your project, create one.
3. Inside `.vscode`, create or open the `c_cpp_properties.json` file.
4. Add or update the following paths under `"includePath"`:

```json
{
    "configurations": [
        {
            "name": "Linux",
            "includePath": [
                "${workspaceFolder}/include",
                "${workspaceFolder}/src",
            ],
            "defines": [],
            "compilerPath": "/usr/bin/gcc",
            "cStandard": "c11",
            "cppStandard": "c++17",
            "intelliSenseMode": "gcc-x64"
        }
    ],
    "version": 4
}
```
This configuration tells VS Code to look for headers in the `include`, `src`, and `app` directories within your project.


## Commands

BhaiShell supports the following built-in commands:

- `cd [directory]`: Changes the current working directory to the specified directory.
- `env`: Prints out the environment variables.
- `help`: Lists all available built-in commands.
- `exit [status]`: Exits the shell with the specified exit status. If no status is provided, it exits with status 0.
- `version`: Displays the shell name, version, username, and an ASCII art.

## Contributing

Contributions are welcome! If you have suggestions, improvements, or bug fixes, please:

- Open an issue or submit a pull request.
- Provide a description of the changes or additions.

Thank you for your interest in BhaiShell!
