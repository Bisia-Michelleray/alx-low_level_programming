#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a
 * listint_t linked list
 * @head: first node of the linked list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *value;
	unsigned int count = 0;

	if (head == NULL)
	{
		if (*head == NULL)
			return (-1);
	}
	tmp = *head;
	while (tmp != NULL)
	{
		if (index - 1 == count)
		{
			value = tmp[0].next;
			tmp[0].next = value[0].next;
			free(value);
			return (1);
		}
		if (index == 0)
		{
			value = *head;
			*head = value[0].next;
			free(value);
			return (1);
		}
		tmp = tmp[0].next;
		count++;
	}
	return (-1);
}
