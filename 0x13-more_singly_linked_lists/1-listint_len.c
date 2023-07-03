#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to the first node
 *
 * Return: the number of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *value = h;
	size_t n = 0;

	while (value)
	{
		value = value[0].next;
		n += 1;
	}
	return (n);
}
