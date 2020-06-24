#include "holberton.h"

/**
 * rev_string - revers the string
 * @s: pointer to char
 * Return: nothing
 */

void rev_string(char *s)
{
	int a, b;
	char c;

	a = 0;
	b = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	a--;
	while (b < a)
	{
		c = (s[a]);
		s[a] = s[b];
		s[b] = c;
		b++;
		a--;
	}
}
