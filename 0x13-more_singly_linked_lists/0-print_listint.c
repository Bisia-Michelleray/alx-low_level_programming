#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the first node
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *value = h;
	size_t n = 0;

	while (value)
	{
		printf("%d\n",  value[0].n);
		n += 1;
		value = value[0].next;
	}
	return (n);
}
