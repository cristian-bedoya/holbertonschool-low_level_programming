#include "holberton.h"

/**
 * puts_half - half prints string
 *
 * @str: pointer to char
 * Return: nothing
 */

void puts_half(char *str)
{
	int a;
	int b;

	a = 0;
	b = 0;

	while (str[a] != '\0')
	{
		a++;
	}

	b = a / 2;

	if (a % 2 == 1)
	{
		b++;
	}

	while (str[b] != '\0')
	{
		_putchar(str[b]);
		b++;
	}
	_putchar('\n');
}
