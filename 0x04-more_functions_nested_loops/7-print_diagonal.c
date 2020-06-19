#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int f, c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (f = 1; f <= n; f++)
	{
		for (c = 1  ; c <= n ; c++)
		{
			if (c == f)
				_putchar ('\\');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
int _putchar(char c)
{
	return (write(1, &c, 1));
}
