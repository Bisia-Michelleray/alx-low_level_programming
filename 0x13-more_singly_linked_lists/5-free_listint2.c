#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: first node of the list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = *head;
		*head = tmp[0].next;
		free(tmp);
	}
	free(*head);
	head = NULL;
}
