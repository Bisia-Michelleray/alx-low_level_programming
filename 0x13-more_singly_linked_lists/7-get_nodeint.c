#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the first node
 * @index: index of the node
 * Return: NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *value = NULL;

	while (head != NULL)
	{
		if (i <= index)
		{
			if (i == index)
			{
				value = head;
				break;
			}
			head = head->next;
			i++;
		}
			else
				return (NULL);
	}
		return (value);
}
