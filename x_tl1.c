#include "shell.h"
/**
 * free_array_2 - functin that free arr,
 * @arr: ptr to array
 */
void free_array_2(char **arr)
{
	int i;

	if (!arr)
		return;

	for (i = 0; arr[i]; i++)
	{
		free(arr[i]), arr[i] = NULL;
	}
	free(arr), arr = NULL;
}
/**
 * pr_xerr - funciton that print err
 * @nm: appears to be a string (char pointer)
 * @xcmd: string (char pointer)
 * @ndx: an integer,
 */
void pr_xerr(char *nm, char *xcmd, int ndx)
{
	char *dinx, msl[] = ": not found\n";

	dinx = int_asc(ndx);

	write(STDERR_FILENO, nm, _strlen(nm));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, dinx, _strlen(dinx));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, xcmd, _strlen(xcmd));
	write(STDERR_FILENO, msl, _strlen(msl));
	free(dinx);
}
