#include "shell.h"

int own_version(char **args)
{
    (void)args; // Unused parameter
    const char *shell_name = "BhaiShell";
    const char *shell_version = "1.0";
    const char *username = getenv("USER") ? getenv("USER") : "unknown";

    printf("\n");
    printf("      ___________________\n");
    printf("     |                   |______________________________\n");
    printf("     | Name : %9s  |      _ _ _ _ _ _             |\n", shell_name);
    printf("     | Version : %s     |     /           \\            |\n", shell_version);
    printf("     | User : %9s  |    /  /\\         \\           |\n", username);
    printf("     |                   |   /  /  \\_________|          |\n");
    printf("     |___________________|  /`-'   .--.   .--.          |\n");
    printf("                    |       \\_    | __ |_| __ |         |\n");
    printf("                    |         |\\  `.__.'-`.__.'         |\n");
    printf("                    |         |_\\___/      \\_|          |\n");
    printf("                    |        /  | |          |          |\n");
    printf("                    |        \\__|_/         /           |\n");
    printf("                    |         __\\__________/__          |\n");
    printf("                    |  __..--\" \\   /    \\   / \"--..__   |\n");
    printf("                    | /         \\ |      | /         \\  |\n");
    printf("                    |/           \\|      |/           \\ |\n");
    printf("                    |___________________________________|\n");
    printf("                    |                                   |\n");
    printf("                    |\"We don't have a lot of choice,    |\n");
    printf("                    | Our last tip placed him somewhere |\n");
    printf("                    | here. We'll just have to          |\n");
    printf("                    | watch our Sensor Beams, and       |\n");
    printf("                    | rely on our other resource.       |\n");
    printf("                    |                           -Luck.\" |\n");
    printf("                    |___________________________________|\n");

    return -1; 
}

// Changes the current working directory
int own_cd(char **args) {
    if (args[1] == NULL) {
        fprintf(stderr, "expected argument to \"cd\"\n");
    } else if (chdir(args[1]) != 0) {
        perror("chdir failed");
    }
    return -1; 
}

// Prints environment variables
int own_env(char **args) {
    int i = 0;
    int col_width = 41;  

    printf(" ----------- Environment Variables ------------\n");
    printf(" | %-*s  |\n", col_width, environ[i]);
    printf(" | %-*s  |\n", col_width, environ[i+1]);
    printf(" | %-*s  |\n", col_width, environ[i+2]);
    printf(" | %-*s  |\n", col_width, environ[i+3]);
    printf(" | %-*s  |\n", col_width, environ[i+4]);
    printf(" | %-*s  |\n", col_width, environ[i+5]);
    printf(" ----------------------------------------------\n");
    return -1; 
}

// Exits the shell
int own_exit(char **args) {
    return (args[1] ? atoi(args[1]) : 0);
}

// Displays help information about built-in commands
int own_help(char **args) {
    (void)args; // Unused parameter
    char *builtin_func_list[] = {
        "cd",
        "env",
        "help",
        "exit",
        "version"
    };
    printf("\n--- help simple_shell ---\n");
    printf("Type a command and its arguments, then hit enter\n");
    printf("Built-in commands:\n");
    for (int i = 0; i < sizeof(builtin_func_list) / sizeof(char *); i++) {
        printf(" -> %s\n", builtin_func_list[i]);
    }
    printf("Use the man command for information on other programs.\n\n");
    return -1; 
}
