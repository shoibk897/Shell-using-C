#ifndef SHELL_H
#define SHELL_H

/* ---- LIBRARIES ---- */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <stddef.h> 

/* ---- MACROS */
#define TOK_DELIM " \t\r\n\a"
extern char **environ;

/* --- main.c --- */
void shell(void);

/* --- shell.c --- */
char *read_line(void);
char **split_line(char *line);
int execute_args(char **args);

/* --- execute_args.c --- */
int new_process(char **args);

/* --- Built-in functions --- */
int own_cd(char **args);
int own_exit(char **args);
int own_env(char **args);
int own_help(char **args);

#endif /* SHELL_H */
