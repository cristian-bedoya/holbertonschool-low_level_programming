#include "holberton.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int temp, end, c;

	c = 0;
	end = n - 1;

	for (c = 0; c < end; c++)
	{
		temp = a[c];
		a[c] = a[end];
		a[end] = temp;
		end--;
	}
}
