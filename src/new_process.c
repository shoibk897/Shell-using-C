#include "shell.h"

int new_process(char **args) {
    // Create a new process
    pid_t pid = fork();
    if (pid == 0) {
        // In child process
        if (execvp(args[0], args) == -1) {
            // If execvp fails, print an error and exit
            perror("execvp failed");
            exit(EXIT_FAILURE);
        }
    } else if (pid < 0) {
        // If fork fails, print an error and return -1
        perror("fork failed");
        return -1;
    } else {
        // In parent process
        int status;
        // Wait for the child process to finish execution
        do {
            waitpid(pid, &status, WUNTRACED);
        } while (!WIFEXITED(status) && !WIFSIGNALED(status));
    }
    return -1; // Default return value indicating no exit
}

