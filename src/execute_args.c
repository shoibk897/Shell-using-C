#include "shell.h"

int execute_args(char **args) {
    // Array of built-in commands
    char *builtin_func_list[] = {
        "cd",
        "env",
        "help",
        "exit",
        "version"
    };

    // Array of function pointers corresponding to built-in commands
    int (*builtin_func[]) (char **) = {
        &own_cd,
        &own_env,
        &own_help,
        &own_exit,
        &own_version
    };

    // If no command is provided, return -1
    if (args[0] == NULL) {
        return -1;
    }

    // Number of built-in commands
    int num_builtins = sizeof(builtin_func_list) / sizeof(char *);

    // Check if the command matches any built-in commands
    for (int i = 0; i < num_builtins; i++) {
        if (strcmp(args[0], builtin_func_list[i]) == 0) {
            // Call the corresponding built-in function
            return (*builtin_func[i])(args);
        }
    }

    // If no built-in command matches, delegate to new_process()
    return new_process(args);
}
