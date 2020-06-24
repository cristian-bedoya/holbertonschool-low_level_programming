#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @n:elements of arrays
 * @i: pointer to int
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		printf("%d", i[i]);
		i++;
		if (i != n)
		{
			printf(", ");
		}
	}
	printf("\n");
}
