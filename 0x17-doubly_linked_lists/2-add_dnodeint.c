#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beggining of a dlistint_t list
 * @h: is pointer to head node
 * @n: is the integer of the new node
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
		new_node->prev = *head;
	}

	return (new_node);
}
