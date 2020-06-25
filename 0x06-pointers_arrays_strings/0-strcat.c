#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int lens = 0, lend = 0;

	while (dest[lend] != '\0')
	{
		lend++;
	}
	while (src[lens] != '\0')
	{
		dest[lend] = src[lens];
		lens++;
		lend++;
	}
	dest[lend] = '\0';
	return (dest);
}
