#include "lists.h"
/**
 * add_nodeint_end - adds new node at the end of a listint_t list
 * @head: double pointer to the head node
 * @n: data for node
 * Return: Address of new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *temp;

	newNode->n = n;
	newNode->next = NULL;

	if (newNode == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}

	return (newNode);
}
