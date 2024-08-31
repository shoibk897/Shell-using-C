#include "shell.h"

void shell_interactive(void)
{
	char *line;
	char **args;
	int status = -1;

	do
	{
		printf("Bhai_prompt$ ");
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
