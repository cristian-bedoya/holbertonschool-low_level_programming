#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0, siz1 = 0, siz2 = 0;
	char *sconcat;

	while (s1 && s1[siz1])
		siz1++;
	while (s2 && s2[siz2])
		siz2++;
	sconcat = malloc(sizeof(char) * (siz1 + siz2 + 1));

	if (sconcat == NULL)
		return (NULL);

	if (s1)
	{
		while (i < siz1)
		{
			sconcat[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (j < (siz1 + siz2))
		{
			sconcat[i] = s2[j];
			i++;
			j++;
		}
	}

	sconcat[i] = '\0';

	return (sconcat);
}
