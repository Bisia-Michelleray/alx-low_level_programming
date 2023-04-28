#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer to the first node
 * @str: string to be duplicated
 * Return: the address of the new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	unsigned int len = 0;
	list_t *new;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}
		new->str = dup;
		new->len = len;
		new->next = (*head);

		*head = new;
		return (new);
}
