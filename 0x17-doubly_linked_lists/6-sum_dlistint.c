#include "lists.h"
/**
 * sum-dlistint - returns sum of all the data(n) of a linked list
 * @head: is pointer to head node
 * Return: sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	if (head == NULL)
		return (0);

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
