#include "holberton.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int f, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (f = 1; f <= size; f++)
	{
		for (c = 1  ; c<= size; c++)
		{
			if (f <= size - c)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
