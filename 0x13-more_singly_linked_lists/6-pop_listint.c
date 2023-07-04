#include "lists.h"

/**
 * pop_listint - deletes head node of a listint_t
 * @head: head node
 * 
 * Return: head nodes data
 */

int pop_listint(listint_t **head)
{
	listint_t *tem;
	int data;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);

	return (data);
}
