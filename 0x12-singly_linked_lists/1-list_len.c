#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: linked list
 * Return: Num of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
