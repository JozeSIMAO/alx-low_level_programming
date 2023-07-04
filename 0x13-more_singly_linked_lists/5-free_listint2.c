#include "lists.h"

/**
 * free_listint2 - frees a listint_t
 * @head: pointer to head node
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
	{
		return;
	}


	temp = (*head)->next;
	free(*head);
	*head = temp;

	*head = NULL;
}
