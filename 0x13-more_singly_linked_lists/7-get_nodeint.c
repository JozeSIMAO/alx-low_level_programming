#include "lists.h"
/**
 * get_nodeint_at_index - returns nth node of a list
 * @head: pointer to head node
 * @index: index to search for
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;

	if (head == NULL)
		return (NULL);

	while (head->next != NULL)
	{
		if (i == index)
		{
			temp = head;
			return (temp);
		}
		head = head->next;
		i++;
	}

	return (NULL);
}
