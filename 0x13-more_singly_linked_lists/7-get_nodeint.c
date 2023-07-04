#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: first node of the linked list
 * @index: index of the node starting at 0
 *
 * Return: NULL or the nth node of the list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	for (; i < index; i++)
	{
		head = head[0].next;
		if (head == NULL)
			return (NULL);
		if (i == index)
			return (head);
	}
	return (head);
}
