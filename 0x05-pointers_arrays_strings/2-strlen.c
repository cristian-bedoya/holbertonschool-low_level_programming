#include "holberton.h"

/**
 * _strlen -return the length of a string
 * @s: string to evaluate
 * return: the length of the string
 */
int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
