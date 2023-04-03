#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: pointer to head node
 * Return: 0
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		return;
	}
	else
	{
		listint_t *temp;

		while (head)
		{
			temp = head->next;
			free(head);
			head = temp;
		}
	}
}
