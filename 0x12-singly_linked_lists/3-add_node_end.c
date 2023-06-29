#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a list_t
 * @head: head of linked list
 * @str: string
 * Return: pointer to new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *temp = *head;
	int len = 0;

	if (new == NULL)
		return (NULL);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}
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

	new->str = strdup(str);
	new->len = len;

	return (new);
}
