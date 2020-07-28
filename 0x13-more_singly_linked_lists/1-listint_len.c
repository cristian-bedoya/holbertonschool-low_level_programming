#include "lists.h"

/**
 * listint_len - prints all the elements of a linked list
 * @h: pointer to the listint_t list to print
 *
 * Return: the number of nodes printed
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	for (count = 0; h; count++)
		h = h->next;

	return (count);
}
