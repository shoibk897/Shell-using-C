#include "shell.h"

char *read_line(void) {
    char *line = NULL;
    size_t bufsize = 0;

    if (getline(&line, &bufsize, stdin) == -1) {
        if (feof(stdin)) {
            free(line);
            exit(EXIT_SUCCESS);
        } else {
            free(line);
            perror("Error while reading the line from stdin");
            exit(EXIT_FAILURE);
        }
    }
    return line;
}



