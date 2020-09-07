#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the ending of a linked list
 * @head: double pointer to the list_t list
 * @n: data to introduce
 *
 * Return: the address of the new element, or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *create_node;
	dlistint_t *aux = *head;

	if (!head)
		return (NULL);

	create_node = malloc(sizeof(dlistint_t));
	if (!create_node)
		return (NULL);

	create_node->n = n;
	create_node->next = NULL;

	if (!(*head))
	{
		create_node->prev = NULL;
		*head = create_node;
		return (*head);
	}

	while (aux->next)
		aux = aux->next;

	aux->next = create_node;
	create_node->prev = aux;

	return (*head);

}
