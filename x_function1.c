#include "shell.h"

/**
 * char *: indicating that it returns a pointer to a character (string).
 * _strdup: This is the name of the function.
 * str : another name in the function
 * const char *str: It's a pointer to a constant null-terminated character array (string)
 *
 * return: 0
 */
char *_strdup(const char *str)
{
	int len = 0, 1;
	char *dupl;

	while (str[len] != '\0')
		len++;

	dupl = (char *)malloc(len + 1);

	if (dupl == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = str[i];

	dupl[len] = '\0';
	return (dupl);
}
/**
 * int: indicating that it returns an integer value
 * _strcmp: the name of the function
 * char *st1 and char *st2: the parameters the function takespointers 
 * to the two strings you want to compare.
 * st1: name of a function
 * st2: another name of a function
 *
 * return: 0 
 */
int _ _strcmp(char *st1, char *st2)
{
	while (*st1 != '\0' && *st2 != '\0')
	{
		if (*st1 != *st2)
			return (*st2 - *st2);
	st1++;
	st2++;
	}
	return (0);
}
