#include "lists.h"
/**
 * dlistint_len - prints all the elements of a double linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	for (count = 0; h; count++)
		h = h->next;

	return (count);
}
