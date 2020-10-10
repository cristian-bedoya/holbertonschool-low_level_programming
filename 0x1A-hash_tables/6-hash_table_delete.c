#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: is the hash table
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *tmp, *actual;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			tmp = ht->array[i];
			while (tmp)
			{
				actual = tmp;
				tmp = tmp->next;
				free(actual->key);
				free(actual->value);
				free(actual);
			}
		}
	}
	free(ht->array);
	free(ht);
}
