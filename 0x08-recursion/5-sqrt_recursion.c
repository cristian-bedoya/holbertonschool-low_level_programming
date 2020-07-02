#include "holberton.h"

int new_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (new_sqrt_recursion(n, 0));
}

/**
 * new_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @c: iterator
 *
 * Return: the resulting square root
 */
int new_sqrt_recursion(int n, int c)
{
	if (c * c > n)
		return (-1);
	if (c * c == n)
		return (c);
	return (new_sqrt_recursion(n, c + 1));
}
