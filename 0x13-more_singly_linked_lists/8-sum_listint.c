#include "lists.h"
/**
 * sum_listint - returns sum of all the data(n) in a linked list
 * @head: head node
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}

	return (sum);
}
