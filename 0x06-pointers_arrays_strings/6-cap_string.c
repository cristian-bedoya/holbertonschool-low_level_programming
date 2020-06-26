#include "holberton.h"

/**
 * cap_string - capitalizes everey word of a string
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *cap_string(char *s)
{
	int x;

	for (x = 0 ; s[x] != '\0';)
	{
		if (x == 0 && (s[x] >= 97 && s[x] <= 122))
		{
			s[x] = s[x] - 32;
			x++;
		}
		if (s[x] == ' ' || s[x] == '\n' || s[x] == '\t'
		    || s[x] == ',' || s[x] == ';' || s[x] == '!'
		    || s[x] == '?' || s[x] == '"' || s[x] == '('
		    || s[x] == ')' || s[x] == '{' || s[x] == '}'
		    || s[x] == '.')
		{
			x++;
			if (s[x] >= 97 && s[x] <= 122)
			{
				s[x] = s[x] - 32;
			}
		}
		else
			x++;
	}
	return (s);
}
