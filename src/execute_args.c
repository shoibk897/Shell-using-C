#include "shell.h"


int execute_args(char **args) {
    char *builtin_func_list[] = {
        "cd",
        "env",
        "help",
        "exit"
    };
    int (*builtin_func[]) (char **) = {
        &own_ch,
        &own_env,
        &own_help,
        &own_exit
    };

    if (args[0] == NULL) {
        return (-1);
    }

    for(int i = 0; i < sizeof(builtin_func_list) / sizeof(char *); i++) {
        if(strcmp(args[0],builtin_func_list[i]) == 0){
            return ((*builtin_func[i])(args));
        }
    }

    return (new_process(args));
}