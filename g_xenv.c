#include "shell.h"
/**
 * g_xenv - function that gets the value of the specified environ var,
 * @var: Pointer to a string representing the name,
 * Return: NULL if not found,
 */
char *g_xenv(char *var)
{
	char *tmp, *key, *value, *env;
	int q;

	for (q = 0; environ[q]; q++)
	{
		tmp = _strdup(environ[q]);
		key = strtok(tmp, "=");

		if (_strcmp(key, var) == 0)
		{
			value = strtok(NULL, "\n");
			env = _strdup(value);
			free(tmp);
			return (env);
		}
		free(tmp), tmp = NULL;
	}
	return (NULL);
}
