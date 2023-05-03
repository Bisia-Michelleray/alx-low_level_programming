#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of linked list
 * @head: pointer to the first node
 * @index:  index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *dNode = NULL;
	listint_t *temp = NULL;
	unsigned int i = 0, list_len = listint_len(*head);

	if ((index > list_len) || (list_len == 0))
		return (-1);
	while (head != NULL)
	{
		if (i == index)
		{
			dNode = *head;
			if (i == 0)
			{
				*head = dNode->next;
				free(dNode);
				return (1);
			}
			temp->next = dNode->next;
			free(dNode);
			return (1);
		}
		else if ((i + 1) == index)
			temp = *head;
		head = &((*head)->next);
		i++;
	}
	return (-1);
}

/**
 *listint_len - Returns the number of elements
 *@h: A pointer to the head of the list
 *Return: the number of elements in the listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
