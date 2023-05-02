#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the first node
 * Return: always 0 (success)
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t **value = head;

	if (value != NULL)
	{
	while (*head != NULL)
	{
		temp = *head;
		free(temp);
		*head = (*head)->next;
	}
	*value = NULL;
	}
}
