#include "shell.h"

// Function to split a line into tokens based on delimiters
char **split_line(char *line){
    
    int bufsize = INITIAL_TOKENS_SIZE;                // Initial buffer size for tokens
    int position = 0;                                 // Position to track the current index in the tokens array
    char **tokens = malloc(bufsize * sizeof(char *)); // Allocate memory for an array of character pointers (tokens)
    char *token;                                      // Pointer to hold each token

    if (!tokens)
    {
        perror("malloc failed");
        exit(EXIT_FAILURE);
    }

    // Tokenize the input line using the defined delimiters
    token = strtok(line, TOK_DELIM);
    while (token != NULL)
    {

        if (token[0] == '#')
        {
            break;
        }
        tokens[position++] = token;
        // If the position exceeds the buffer size, reallocate more memory
        if (position >= bufsize)
        {
            bufsize += INITIAL_TOKENS_SIZE;
            tokens = realloc(tokens, bufsize * sizeof(char *));

            if (!tokens)
            {
                perror("realloc failed");
                exit(EXIT_FAILURE);
            }
        }
        token = strtok(NULL, TOK_DELIM); // next token
    }
    tokens[position] = NULL;
    return tokens; // Return the array of tokens
}
