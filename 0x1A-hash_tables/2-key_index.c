#include "hash_tables.h"
/**
 * key_index - gives you the index of a key
 * @key: is key
 * @size: size of the array
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}
