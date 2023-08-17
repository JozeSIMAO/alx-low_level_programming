#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: is pointer to head node
 * @index: is index of pointer to delete
 * Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i  = 0;
	dlistint_t *temp = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;

		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (0);
	}
	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (-1);
	if (temp->next == NULL)
	{
		temp->prev->next = NULL;
	}
	else
	{
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
	}

	free(temp);
	return (1);
}
