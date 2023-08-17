#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a dlistint_t list
 * @h: is pointer to head node
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
