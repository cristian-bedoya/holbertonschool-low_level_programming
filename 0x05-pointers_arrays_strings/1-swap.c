#include "holberton.h"

/**
 * reset_to_98 - updates the values of variable
 * @a: pointer 1  variable
 * @b: pointer 2 varibale
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
