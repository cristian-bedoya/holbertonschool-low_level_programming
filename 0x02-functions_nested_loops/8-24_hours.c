#include "holberton.h"

/**
 * main - prints every minute
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int n1;
	int n2;

	for (n1 = 0 ; n1 < 24; n1++)
	{
		for (n2 = 0 ; n2 < 60; n2++)
		{
			_putchar((n1 / 10) + 48);
			_putchar((n1 % 10) + 48);
			_putchar(':');
			_putchar((n2 / 10) + 48);
			_putchar((n2 % 10) + 48);
			_putchar('\n');
		}
	}
}
