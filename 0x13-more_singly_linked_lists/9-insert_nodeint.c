#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first node
 * @idx: index of the list where the new node should be added
 * @n: integer to be added
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode = NULL;
	listint_t *previousNode = NULL;
	unsigned int i = 0;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL || head == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	while (head != NULL)
	{
		if (i == idx)
		{
			if (i == 0)
			{
				newNode->next = *head;
				*head = newNode;
				return (newNode);
			}
			newNode->next = previousNode->next;
			previousNode->next = newNode;
			return (newNode);
		}
		else if ((i + 1) == idx)
			previousNode = *head;
		head = &((*head)->next);
		i++;
	}
	return (NULL);
}

/**
 * listint_len - counts the number of nodes in a linked list
 * @h: head of the list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
