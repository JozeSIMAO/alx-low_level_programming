#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head pointer of the dlistint_t list
 * Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
