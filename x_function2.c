#include "shell.h"
/**
 * _strlen - function that calc a length,
 * @st: a pointer to a null-terminated character array (string)
 * Return: always leng,
 */
int _strlen(char *st)
{
	int leng = 0;

	while (st[leng] != '\0')
		leng++;
	return (leng);
}

/**
 * _strcat - function that concocat
 * @src: a pointer to a null-terminated character array (string)
 * @dest: a pnt char (destination)
 * Return: return the val of dest,
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
	dest[destlen + srclen] = '\0';
	return (dest);
}
/**
 * _strcpy - function that copy,
 * @dest: char pointer,
 * @src: char pointer,
 * Return: dest value,
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
