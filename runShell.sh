#!/bin/bash

# Compile the shell
gcc -o shell main.c src/shell.c src/builtin_func.c src/execute_args.c src/new_process.c src/read_line.c src/split_line.c -Iinclude

# Run the shell
./shell
