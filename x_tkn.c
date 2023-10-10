#include "shell.h"
/**
 * tkn_x - function that okenizes the input string into an array of strings,
 * @line: pointer to a string to be tokenized.
 * Return: NULL if there are no tokns,
 */
char **tkn_x(char *line)
{
	char *token = NULL, *tmp = NULL;
	char **command = NULL;
	int cnt = 0, q = 0;

	if (!line)
		return (NULL);
	tmp = _strdup(line);
	token = strtok(tmp, DELIM);
	if (token == NULL)
	{
		free(line), line = NULL;
		free(tmp), tmp = NULL;
		return (NULL);
	}
	while (token)
	{
		cnt++;
		token = strtok(NULL, DELIM);
	}
	free(tmp), tmp = NULL;
	command = malloc(sizeof(char *) * (cnt + 1));
	if (!command)
	{
		free(line), line = NULL;
		return (NULL);
	}
	token = strtok(line, DELIM);
	while (token)
	{
		command[q] = _strdup(token);
		token = strtok(NULL, DELIM);
		i++;
	}
	free(line), line = NULL;
	command[q] = NULL;
	return (command);
}
