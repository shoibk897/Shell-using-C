#include "shell.h"

char **split_line(char *line) {
    int bufsize = INITIAL_TOKENS_SIZE;
    int position = 0;
    char **tokens = malloc(bufsize * sizeof(char *));
    char *token;

    if (!tokens) {
        perror("malloc failed");
        exit(EXIT_FAILURE);
    }

    token = strtok(line, TOK_DELIM);
    while (token != NULL) {
        if (token[0] == '#') {
            break;
        }
        tokens[position++] = token;
        if (position >= bufsize) {
            bufsize += INITIAL_TOKENS_SIZE;
            tokens = realloc(tokens, bufsize * sizeof(char *));
            if (!tokens) {
                perror("realloc failed");
                exit(EXIT_FAILURE);
            }
        }
        token = strtok(NULL, TOK_DELIM);
    }
    tokens[position] = NULL;
    return tokens;
}


