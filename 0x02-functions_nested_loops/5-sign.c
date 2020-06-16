#include "holberton.h"

/**
 *main - prints the sign of a number
 *c : character to check..
 *return: 1 is lower 0 if is not
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('-');
		return (0);
	}
	else
	{
		_putchar ('0');
		return (-1);
	}
}
