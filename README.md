# BhaiShell

## Overview

**BhaiShell** is a custom shell implementation written in C. It provides a command-line interface where users can execute built-in commands and manage processes. This project demonstrates basic shell functionalities and process handling in C.

## Running

To run BhaiShell:

1. **Compile the Project**

   Use the following command from the root directory:

   ```bash
   gcc -o shell main.c src/shell.c src/builtin_func.c src/execute_args.c src/new_process.c src/read_line.c src/split_line.c -Iinclude
