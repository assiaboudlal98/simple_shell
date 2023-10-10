#include "shell.h"
/**
 *_execute - function executes the specified command with the given arg,
 * @command: pointer to a pointer of char arr,
 * @argv: pointer to a pointer of char arr,
 * @ndx: integer representing an index,
 * Return: exit status,
 */
int _execute(char **command, char **argv, int ndx)
{
	char *f_xcmd;
	pid_t child;
	int status;

	f_xcmd = h_xpth(command[0]);
	if (!f_xcmd)
	{
		pr_xerr(argv[0], command[0], ndx);
		free_array_2(command);
		return (127);
	}
	child = fork();
	if (child == 0)
	{
		if (execve(f_xcmd, command, environ) == -1)
		{
			free(f_xcmd), f_xcmd = NULL;
			free_array_2(command);
		}
	}
	else
	{
		waitpid(child, &status, 0);
		free_array_2(command);
		free(f_xcmd), f_xcmd = NULL;
	}
	return (WEXITSTATUS(status));
}
