#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: pointer to first node
 * @str: string to be duplicated
 * Return: address of the new element or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	char *dup;
	list_t *new, *last;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	dup = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

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
