#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_int linked list
 * @head: double pointer to the head node
 * Return: the head nodes data(n)
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

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
