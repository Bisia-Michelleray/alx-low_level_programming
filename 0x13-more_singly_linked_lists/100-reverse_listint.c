#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: first node of the linked list
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp = NULL;
	listint_t *value = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head[0]).next == NULL)
		return (*head);
	while (*head)
	{
		value = (*head[0]).next;
		(*head[0]).next = tmp;
		tmp = *head;
		*head = value;
	}
	*head = tmp;
	return (*head);
}
