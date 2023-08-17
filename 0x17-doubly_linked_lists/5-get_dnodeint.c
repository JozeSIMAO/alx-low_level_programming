#include "lists.h"
/**
 * get_dnoteint_at_index - returns nth node of a dlistint_t linked list
 * @head: is pointer to head node
 * @index: is index of pointer to find
 * Return: pointer to node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i = 0;

	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
