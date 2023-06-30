#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the first node
 * @str: string to be duplicated
 *
 * Return: NULL or the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup_str;
	int i;
	list_t *new_node;
	list_t *last_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	dup_str = strdup(str);
	if (str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	for (i = 0; str[i];)
	{
		i++;
	}
	new_node[0].len = i;
	new_node[0].str = dup_str;
	new_node[0].next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		last_node = *head;
		while (last_node[0].next != NULL)
		{
			last_node = last_node[0].next;
		}
		last_node[0].next = new_node;
		return (new_node);
	}
}
