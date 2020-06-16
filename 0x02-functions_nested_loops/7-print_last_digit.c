#include "holberton.h"

/**
 * print_sign -  print the last digit
 *
 * n is integer
 * Return: n.
 */
int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
	{
		n = (n * -1);
	}
	_putchar(n + 48);
	return (n);
}
