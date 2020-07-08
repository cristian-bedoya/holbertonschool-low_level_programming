#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - returns a pointer duplicate of the string
 * @str: string to duplicate
 *
 * Return: pointer to the copy (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	unsigned int size = 0, i = 0;
	char *cpy;

	if (str == NULL)
		return (NULL);

	while (str[size])
		size++;

	cpy = malloc(sizeof(char) * (size + 1));

	if (cpy == NULL)
		return (NULL);

	while ((cpy[i] = str[i]) != '\0')
		i++;

	return (cpy);

}
