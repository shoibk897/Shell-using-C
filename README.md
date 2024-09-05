# BhaiShell

## Overview

**BhaiShell** is a custom shell implementation written in C. It provides a command-line interface where users can execute built-in commands and manage processes. This project demonstrates basic shell functionalities and process handling in C.

## Running

To run BhaiShell, follow these steps:

1. **Compile the Project**

   Use the following command from the root directory:

   ```bash
   gcc -o shell main.c src/shell.c src/builtin_func.c src/execute_args.c src/new_process.c src/read_line.c src/split_line.c -Iinclude
   ```

2. **Execute BhaiShell**

   After compiling, run the shell executable:

   ```bash
   ./shell
   ```

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
```

I made sure to include:

- Corrected the command block syntax.
- Added a section for executing the compiled shell.
- Clarified the key features section.
- Improved readability and consistency throughout the document.

Let me know if there's anything else you'd like to adjust!