#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: first node of a linked list
 *
 * Return: sum of all the data or 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	if (tmp == NULL)
	{
		return (0);
	}
	else if (tmp != NULL)
	{
		while (tmp != NULL)
		{
			sum += tmp[0].n;
			tmp = tmp[0].next;
		}
		return (sum);
	}
	return (sum);
}
