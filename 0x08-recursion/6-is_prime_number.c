#include "holberton.h"

int new_prime_number(int n, int c);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (new_prime_number(n, 2));
}

/**
 * new_prime_number - calculates if a number is prime recursively
 * @n: number to evaluate
 * @c: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int new_prime_number(int n, int c)
{
	if (n == c)
		return (1);
	if (n % c == 0)
		return (0);
	return (new_prime_number(n, c + 1));
}
