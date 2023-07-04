#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node’s data (n)
 * @head: first node of the linked list
 *
 * Return: 0 or the data n
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp_head = *head;
	int i;

	if (head == NULL)
	{
		if(*head == NULL)
		return (0);
	}
	if (tmp_head == NULL)
	{
		i = 0;
	}
	else
	{
		i = (*head[0]).n;
		*head = tmp_head[0].next;
		free(tmp_head);
	}
	return (i);
}
