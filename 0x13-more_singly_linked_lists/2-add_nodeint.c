#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t
 * @head: pointer to head node
 * @n: variable of new node
 *
 * Return: pointer
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->next = *head;
	*head = new;
	new->n = n;

	if (*head == NULL)
	{
		*head = new;
	}

	return (new);
}
