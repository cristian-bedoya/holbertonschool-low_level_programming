#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @n:elements of arrays
 * @a: pointer to int
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		i++;
		if (i != n)
		{
			printf(", ");
		}
	}
	printf("\n");
}
