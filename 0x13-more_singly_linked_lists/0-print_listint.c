#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the first node
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t value = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		value++;
		h = h->next;
	}
	return (value);
}
