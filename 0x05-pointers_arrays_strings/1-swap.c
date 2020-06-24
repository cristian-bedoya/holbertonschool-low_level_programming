#include "holberton.h"

/**
 * swap_int  - swap values of integers
 * @a: pointer 1 variable
 * @b: pointer 2 varibale
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
