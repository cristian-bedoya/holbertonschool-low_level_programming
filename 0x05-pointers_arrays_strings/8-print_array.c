#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @n:elements of arrays
 * @a: pointer to int
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int a;

	a = 0;

	while (a < n)
	{
		printf("%d", a[a]);
		a++;
		if (a != n)
		{
			printf(", ");
		}
	}
	printf("\n");
}
