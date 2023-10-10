#include "shell.h"
/**
 * h_xpth - attempts to find the full path of the specified
 *	cmnd in the directories,
 * @cmnd: Pointer to a pointer of character arr,
 * Return: NULL if not found,
 */
char *h_xpth(char *cmnd)
{
	char *pth_xenv, *f_xcmd, *xdr;
	int q;
	struct stat st;

	for (q = 0; cmnd[q]; q++)
	{
		if (cmnd[q] == '/')
		{
			if (stat(cmnd, &st) == 0)
				return (_strdup(cmnd));
			return (NULL);
		}
	}
	pth_xenv = g_xenv("PATH");
	if (!pth_xenv)
		return (NULL);
	xdr = strtok(pth_xenv, ":");
	while (xdr)
	{
		f_xcmd = malloc(_strlen(xdr) + _strlen(cmnd) + 2);
		if (f_xcmd)
		{
			_strcpy(f_xcmd, xdr);
			_strcat(f_xcmd, "/");
			_strcat(f_xcmd, cmnd);
			if (stat(f_xcmd, &st) == 0)
			{
				free(pth_xenv);
				return (f_xcmd);
			}
			free(f_xcmd), f_xcmd = NULL;
			xdr = strtok(NULL, ":");
		}
	}
	free(pth_xenv);
	return (NULL);
}
