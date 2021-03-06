#include "hash_tables.h"

/**
 * hash_table_create - check the code for Holberton School students.
 * @size: size of the hash table
 * Return: A new table.
 **/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	new_table = malloc(sizeof(hash_table_t));
	if (!new_table)
		return (NULL);

	new_table->size = size;

	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!(new_table->array))
		return (NULL);

	return (new_table);
}
