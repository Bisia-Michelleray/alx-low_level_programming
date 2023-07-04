#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: first node of the linked list
 * @n: element to add at the new node at the end of the list
 *
 * Return: address of the new element or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end;
	listint_t *tmp;

	if (head == NULL)
		return (NULL);
	new_end = malloc(sizeof(listint_t));
	if (new_end == NULL)
		return (NULL);
	new_end[0].n = n;
	new_end[0].next = NULL;
	if (*head == NULL)
	{
		*head = new_end;
		return (new_end);
	}
	tmp = *head;
	while (tmp[0].next != NULL)
	{
		tmp = tmp[0].next;
	}
	tmp[0].next = new_end;
	return (new_end);
}
