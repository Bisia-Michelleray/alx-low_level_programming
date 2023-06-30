#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the first node
 * @str: string to be duplicated
 *
 * Return: the address of the new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int i;
	char *dup_str;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node[0].str = dup_str;
	new_node[0].next = *head;
	*head = new_node;
	for (i = 0; str[i];)
		i++;
	new_node[0].len = i;
	return (new_node);
}
