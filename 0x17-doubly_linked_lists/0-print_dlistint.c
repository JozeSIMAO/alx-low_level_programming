#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head pointer of the dlistint_t list
 * Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;
	dlistint_t *temp = h

	while (temp)
	{
		counter++;
		temp = temp->next;
	}

	return (counter);
}
