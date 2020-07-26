#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *create_node;
	list_t *aux_node = *head;
	unsigned int len;

	for (len = 0; str[len];)
		len++;

	create_node = malloc(sizeof(list_t));
	if (!create_node)
		return (NULL);

	create_node->str = strdup(str);
	create_node->len = len;
	create_node->next = NULL;

	if (*head == NULL)
	{
		*head = create_node;
		return (create_node);
	}

	while (aux_node->next)
		aux_node = aux_node->next;

	aux_node->next = create_node;

	return (create_node);
}
