#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a node to the end of a linked list
 * @head: head of node
 * @str: node->str
 * Return: address of new element or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	char *dup;
	int len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dup;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;

		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
