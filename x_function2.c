#include "shell.h"
/**
 * _strlen-: This is the name of the function
 * @str: a pointer to a null-terminated character array (string)
 *
 * return: always 0
 */

int _strlen(char *str)
{
	int leng = 0;
	while (st[leng] != '\0')
		leng++;
	return (leng);
}

/**
 * _strcat-: the name of the function
 * @str: a pointer to a null-terminated character array (string)
 *
 * return: dest
 */
char *_strcat(char *dest, char *src)
{
	int destlen = 0, srclen = 0;

	while (dest[destlen] != 0)
		destlen++;
	while (src[srclen] != '\0')
	{
		dest[destlen + srclen] = src[srclen];
		srclen++;
	}
	dest[destlen = srclen] = '\0';

	return (dest);
}
/**
 * char *: indicating that it returns a pointer to a character (string)
 * _strcpy: the name of the function
 * dest : name of a function
 *
 * return: 0
 */ 
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[1] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
