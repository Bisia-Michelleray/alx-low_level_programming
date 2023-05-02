#include "lists.h"

/**
 * sum_listint -  returns the sum of all the data (n) of listint_t linked list
 * @head: pointer to the first node
 * Return: 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *value = head;
	size_t sum = 0;

	while (value != NULL)
	{
		sum += value->n;
		value = value->next;
	}
	return (sum);
}
