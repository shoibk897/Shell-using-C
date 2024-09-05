#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

#define TOK_DELIM " \t\n"
#define INITIAL_TOKENS_SIZE 64

extern char **environ;

void shell(void);
char *read_line(void);
char **split_line(char *line);
int execute_args(char **args);
int new_process(char **args);
int own_cd(char **args);
int own_exit(char **args);
int own_env(char **args);
int own_help(char **args);
int own_version(char **args);

#endif /* SHELL_H */
