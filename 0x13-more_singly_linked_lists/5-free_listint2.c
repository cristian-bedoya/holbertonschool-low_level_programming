#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: double pointer to the list_t list
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (head = NULL)
		return;

	while (*head)
	{
		aux = (*head)->next;
		free(*head);
		*head = aux;
	}
	*head = NULL;
}
