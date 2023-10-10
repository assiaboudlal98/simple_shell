#include "shell.h"
/**
 * z_btx - Checks if the input command matches
 *	any predefined commands,
 * @cmnd: Input command to be checked,
 * Return: always 0,
 */
int z_btx(char *cmnd)
{
	char *btx[] = {"exit", NULL};
	int q;

	for (q = 0; btx[q]; q++)
	{
		if (_strcmp(cmnd, btx[q]) == 0)
			return (1);
	}
	return (0);
}
/**
 * hnd_btx - Handles the "exit" command based on
 *      the input command and parameters,
 * @cmnd: Pointer to the input command to be handled,
 * @argv: Pointer to the arguments associated with the command
 * @status: Integer representing the current status,
 * @ndx: Integer representing an index,
 */
void hnd_btx(char **cmnd, char **argv, int status, int ndx)
{
	(void) argv;
	(void) ndx;
	if (_strcmp(cmnd[0], "exit") == 0)
		xt_sh(cmnd, status);
}
/**
 * xt_sh - function that frees the memory allocated
 *	for the input command
 * @cmnd: Pointer to a pointer of character arrays,
 * @status: nteger representing the exit,
 */
void xt_sh(char **cmnd, int status)
{
	free_array_2(cmnd);
	exit(status);
}
