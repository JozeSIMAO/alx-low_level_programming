#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end ofa dlistint_t list
 * @head: is double pointer to head node
 * @n: is number assigned to new node
 * Return: pointer to the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = new_node;
		new_node->prev = temp;
	}

	return (new_node);
}
