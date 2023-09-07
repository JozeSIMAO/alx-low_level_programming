#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = malloc(sizeof(hash_table_t));
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);
	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t) * size);

	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	while (i < size)
	{
		new_table->array[i] = NULL;
	}

	return (new_table);
}
