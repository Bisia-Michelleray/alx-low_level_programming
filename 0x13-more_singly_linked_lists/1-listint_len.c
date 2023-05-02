#include "lists.h"

/**
 * listint_len - that returns the number of elements in a linked listint_t list
 * @h: pointer to the first node
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
