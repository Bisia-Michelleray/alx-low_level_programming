#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the first element of list_t
 *
 * Return: 1 if NULL or tne number of elements
 */

size_t list_len(const list_t *h)
{
	const list_t *temp = h;

	if (temp != NULL && temp->next != NULL)
		return (1 + list_len(temp->next));
	else if (temp != NULL)
		return (1);
	return (0);
}
