#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: double pointer to head node
 * Return: always (0) success
 */

void free_listint2(listint_t **head)
{
	if (head == NULL)
	{
		return;
	}

	listint_t *temp;

	while (*head)
	{
		temp = *head->next;
		free(*head);
		*head = temp;
	}

	head = NULL;
}
