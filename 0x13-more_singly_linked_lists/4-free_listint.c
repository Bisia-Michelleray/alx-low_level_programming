#include "lists.h"

/**
 * free_listint -  frees a listint_t list
 * @head: pointer to the first node
 * Return: always 0 (success)
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
