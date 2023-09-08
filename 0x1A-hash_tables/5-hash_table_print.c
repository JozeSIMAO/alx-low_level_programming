#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: is the hash
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *new_node;
	unsigned long int i = 0;
	int counter = 0;

	if (ht == NULL)
		return;

	printf("{");

	while (i < ht->size)
	{
		new_node = ht->array[i];
		while (new_node != NULL)
		{
			if (counter)
			{
				printf(", ");
			}
			printf("'%s': '%s'", new_node->key, new_node->value);
			counter = 1;
			new_node = new_node->next;
		}
		i++;
	}
	printf("}\n");
}
