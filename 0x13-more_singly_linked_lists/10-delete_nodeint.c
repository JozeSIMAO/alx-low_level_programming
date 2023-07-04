#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at index
 * @head: pointer to head node
 * @index: index
 * Return: 1 if success or -1 else
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *temp1;
	unsigned int i = 0;

	if (*head == NULL || head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp != NULL && i < index - 1)
	{
		if (temp->next == NULL)
		{
			return (-1);
		}
		temp = temp->next;
	}

	if (temp == NULL || temp->next == NULL)
	{
		return (-1);
	}
	temp1 = temp->next;
	temp->next = temp1->next;
	free(temp1);

	return (1);
}
