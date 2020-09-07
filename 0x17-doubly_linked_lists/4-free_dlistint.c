#include "lists.h"

/**
 * free_dlistint - frees a double linked list
 * @head: list_t list to be freed
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
