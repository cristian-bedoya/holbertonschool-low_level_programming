#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: pointer to the listint_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	for (count = 0; h; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
