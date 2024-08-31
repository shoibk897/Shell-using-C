gcc -Wall -Werror -Wextra -pedantic -std=gnu99 -Iinclude \
    app/main.c \
    src/execute_args.c \
    src/new_process.c \
    src/read_line.c \
    src/split_line.c \
    src/builtin_func.c \
    app/shell.c -o hsh
