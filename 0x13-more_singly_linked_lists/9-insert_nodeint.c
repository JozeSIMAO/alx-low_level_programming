#include "lists.h"
/**
 * insert_nodeint_at_index - inserts new node at given position
 * @head: double pointer to head node
 * @idx: index of where new node should be put
 * @n: data(n) of new node
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp = *head;
	listint_t *newNode = malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	for (i = 0; i < idx - 1 && temp != NULL; i++)
	{
		temp = temp->next;
	}

	if (i != idx - 1)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = temp->next;
	temp->next = newNode;

	return (newNode);
}
