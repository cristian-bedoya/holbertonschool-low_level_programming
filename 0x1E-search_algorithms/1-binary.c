#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: array to search the value in
 * @size: size of the array
 * @value: value to look for
 *
 * Return: the index of the found value,
 * or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t i = 0;
	size_t m = 0;

	if (array)
	{
		while (left <= right)
		{
			i = left;
			printf("Searching in array: ");
			while (i <= right)
			{
				printf("%d", array[i]);
				if (i < right)
					printf(", ");
				i++;
			}
			printf("\n");

			m = ((left + right) / 2);
			if (array[m] < value)
				left = m + 1;
			else if (array[m] > value)
				right = m - 1;
			else
				return (m);
		}
	}
	return (-1);
}
