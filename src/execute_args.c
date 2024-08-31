#include "shell.h"

int execute_args(char **args) {
    char *builtin_func_list[] = {
        "cd",
        "env",
        "help",
        "exit"
    };
    int (*builtin_func[]) (char **) = {
        &own_cd,
        &own_env,
        &own_help,
        &own_exit
    };

    if (args[0] == NULL) {
        return (-1);
    }

    size_t num_builtins = sizeof(builtin_func_list) / sizeof(char *);
    for (size_t i = 0; i < num_builtins; i++) {
        if (strcmp(args[0], builtin_func_list[i]) == 0) {
            return ((*builtin_func[i])(args));
        }
    }

    return (new_process(args));
}

