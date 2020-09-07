#include "lists.h"
/**
 * sum_dlistint - Returns the sum of all the data
 * @head: list_t list to be sum
 *
 * Return: 0 if is empty or the sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *aux = head;
	size_t i;
	int summ = 0;

	if (!head)
		return (0);

	for (i = 0; aux; i++)
	{
		summ += aux->n;
		aux = aux->next;
	}
	return (summ);
}
