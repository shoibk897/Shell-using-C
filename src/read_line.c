#include "shell.h"

char *read_line(void){

    char *line = NULL; // Pointer to store the line read from stdin
    size_t bufsize = 0;   

    // Read a line from stdin
    if (getline(&line, &bufsize, stdin) == -1)
    {
        // Check if getline failed due to end-of-file
        if (feof(stdin))
        {
            free(line);        
            exit(EXIT_SUCCESS);
        }
        else
        {
            // Print error message for getline failure
            perror("getline failed");
            free(line);         
            exit(EXIT_FAILURE); 
        }
    }
    return line; // Return the line read from stdin
}
