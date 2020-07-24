#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked
 * @h: pointer to the list_t list to print
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count;

	for (count = 0; h; count++)
		h = h->next;

	return (count);
}
