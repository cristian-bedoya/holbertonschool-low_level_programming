#include "holberton.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: value to raise
 * @y: power
 *
 * Return: result of the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint (const char *b)
{
	int i;
	unsigned int  len = 0, dec = 0;


	while (b[len])
		len++;
	len -= 1;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{

		if (b[i] < '0' || b[i] > '1')
			return (0);

		dec += ((b[len] - '0') * _pow_recursion(2, i));
		len--;
	}
	return (dec);
}
