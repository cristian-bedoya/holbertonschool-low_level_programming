#include <stdlib.h>
#include "holberton.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lens1, lens2, i, j;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (lens1 = 0; s1[lens1] != '\0'; lens1++)
		;
	for (lens2 = 0; s1[lens2] != '\0'; lens2++)
		;

	if (n >= lens2)
		str = malloc(sizeof(char) * (lens1 + lens2 + 1));
	else
		str = malloc(sizeof(char) * (lens1 + 1 + n));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < lens1; i++)
		str[i] = s1[i];
	for (j = 0; n >= lens2 && i < (lens1 + lens2); j++)
	{
		str[lens1] = s2[j];
		i++;
	}
	for (j = 0; n < lens2 && i < (lens1 + n); j++)
	{
		str[lens1] = s2[j];
		i++;
	}

	str[lens1] = '\0';
	return (str);
}
