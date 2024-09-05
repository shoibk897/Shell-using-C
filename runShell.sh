#!/bin/bash

# Compile the shell
gcc -o shell main.c -I./include -L. ./Lib/BhaiShellLib.a

# Run the shell
./shell

