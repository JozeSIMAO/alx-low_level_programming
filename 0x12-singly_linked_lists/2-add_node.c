#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list_t
 * @head: head node of linked list
 * @str: str elemenent of new node
 * Return: pointer to new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	int len = 0;

	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		new->next = *head;
		*head = new;
	}
	while (str[len] != '\0')
	{
		len++;
	}

	new->str = strdup(str);
	new->len = len;

	return (new);
}
