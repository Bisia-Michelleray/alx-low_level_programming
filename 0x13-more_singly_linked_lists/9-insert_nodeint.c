#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: first node of the linked list
 * @idx: index of the list where the new node should be added
 * @n: element of the node to add at the given position
 *
 * Return: element to be added or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *tmp;
	listint_t *new_node;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		tmp = *head;
		for (; i < idx - 1 && tmp != NULL; i++)
		{
			tmp = tmp[0].next;
		}
		if (tmp == NULL)
			return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node[0].n = n;
	if (idx == 0)
	{
		new_node[0].next = *head;
		*head = new_node;
		return (new_node);
	}
	new_node[0].next = tmp[0].next;
	tmp[0].next = new_node;
	return (new_node);
}
