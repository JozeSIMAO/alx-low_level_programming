#include "lists.h"

/**
 * list_len - returns number of elements in a linked list
 * @h: linked list list_t
 * Return: number
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
