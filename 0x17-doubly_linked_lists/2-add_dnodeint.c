#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @n: data to introduce
 *
 * Return: the address of the new element, or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *create_node;

	if (!head)
		return (NULL);

	create_node = malloc(sizeof(dlistint_t));
	if (!create_node)
		return (NULL);

	create_node->n = n;
	create_node->next = (*head);
	create_node->prev = NULL;

	if (*head)
		(*head)->prev = create_node;

	(*head) = create_node;

	return (*head);
}
