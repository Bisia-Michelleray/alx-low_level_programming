#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the first node
 * Return: always 0 (success)
 */

void free_listint2(listint_t **head)
{
	listint_t *value;

	if (head != NULL)
	{
	while (*head != NULL)
	{
		value = (*head)->next;
		free(*head);
		*head = value;
	}

	*head = NULL;
	}
}