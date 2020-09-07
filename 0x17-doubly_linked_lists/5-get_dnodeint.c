#include "lists.h"

/**
 * get_dnodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *aux = head;

	if (!head)
		return (NULL);
	for (i = 0; aux && i < index; i++)
		aux = aux->next;

	return (aux);

}
