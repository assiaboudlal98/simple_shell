#include "shell.h"
/**
 * _strdup - This is the name of the function,
 * @str: It's a pointer to a constant null-terminated character array (string)
 * Return: return the value of dupl,
 */
char *_strdup(const char *str)
{
	int len = 0, i;
	char *dupl;

	while (str[len] != '\0')
		len++;
	dupl = (char *)malloc(len + 1);
	if (dupl == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		dupl[i] = str[i];
	dupl[len] = '\0';
	return (dupl);
}
/**
 * _strcmp - the function that compire,
 * @st1: the parameters the function takes pnt,
 * @st2: the parameters the function takes pnt,
 * Return: always 0,
 */
int _strcmp(char *st1, char *st2)
{
	while (*st1 != '\0' && *st2 != '\0')
	{
		if (*st1 != *st2)
			return (*st1 - *st2);
	st1++;
	st2++;
	}
	return (0);
}
