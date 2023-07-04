#include "lists.h"

/**
 * _re - reallocates memory for an array of pointers
 * @list: old list to append
 * @size: size of the new list
 * @n: new node to be added in the linked list
 *
 * Return: pointer to the new list
 */

listint_t **_re(listint_t **list, size_t size, listint_t *n)
{
	listint_t **new;
	size_t i;

	new = malloc(size * sizeof(listint_t *));
	if (new == NULL)
	{
		free(list);
		exit(98);
	}
	for (; i < size - 1; i++)
		new[i] = list[i];
	new[i] = n;
	free(list);
	return (new);
}

/**
 * free_listint_safe - frees a listint_t list
 * @head: first to the list
 *
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **head)
{
	size_t i = 0, value = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (head == NULL)
	{
		if (*head == NULL)
		return (0);
	}
	while (!*head)
	{
		for (; i < value; i++)
			if (*head == list[i])
			{
				*head = NULL;
				free(list);
				return (value);
			}
		value++;
		list = _re(list, value, *head);
		next = (*head[0]).next;
		free(*head);
		*head = next;
	}
	free(list);
	return (value);
}
