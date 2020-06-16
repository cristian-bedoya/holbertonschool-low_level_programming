#include "holberton.h"

/**
 * print_sign - sign of a number.
 *
 * @n: n is integer
 * Return: 1 +, cer0 , -1.
 */

int print_last_digit(int n)
{

	int ld = 0;

	if (n >= 0)
	{
		ld = ((n % 10) + 48);
		_putchar(ld);
	}
	else if (n < 0)
	{
		n = n * -1;
		ld = ((n % 10) + 48);
		_putchar(ld);
	}
	return (n);
}
