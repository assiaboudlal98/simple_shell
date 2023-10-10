#include "shell.h"
/**
 * main - the entry point,
 * @ac: integer var,
 * @argv: char (pnt) argument,
 * Return: nothing,
 */
int main(int ac, char **argv)
{
	char *line = NULL, **command = NULL;
	int status = 0, ndx = 0;

	(void) ac;
	while (1)
	{
		line = rdl_x();
		if (line == NULL)
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			return (status);
		}
		ndx++;
		command = tkn_x(line);
		if (!command)
			continue;
	if (z_btx(command[0]))
		hnd_btx(command, argv, status, ndx);
	else
		status = _execute(command, argv, ndx);
	}
}
