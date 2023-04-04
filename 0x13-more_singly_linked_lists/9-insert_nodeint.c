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
	unsigned int len = 0;
	listint_t *temp = *head;
	listint_t *temp1 = *head;
	listint_t *newNode = malloc(sizeof(listint_t));

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}

	while (temp1 != NULL)
	{
		temp1 = temp1->next;
		len++;
	}

	if (idx > len)
		return (NULL);

	idx--;

	while (idx == 0)
	{
		temp = temp->next;
	}

	newNode->next = temp->next;
	newNode->next = temp;

	return (newNode);
}
