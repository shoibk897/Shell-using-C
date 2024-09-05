#include "shell.h"

void shell(void)
{
    char *line;      // Buffer to hold the user input line
    char **args;     // Array of arguments parsed from the input line
    int status = -1; // Status of the command execution; -1 to continue looping

    do
    {
        // Fetch username from enviornment variable
        const char *username = getenv("USER");
        if (username == NULL)
        {
            username = "User";
        }

        printf("%s@Bhai_prompt$ ", username);

        line = read_line();

        args = split_line(line);

        status = execute_args(args);

        free(line);
        free(args);

        if (status >= 0)
        {
            exit(status);
        }
    } while (status == -1);
}
