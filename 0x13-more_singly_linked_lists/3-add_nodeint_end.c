#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a listint_t list
 * @head: pointer to head node
 * @n: variable of new node
 *
 * Return: a pointer
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (new == NULL)
	{
		return (NULL);
	}
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	new->n = n;

	return (new);
}
