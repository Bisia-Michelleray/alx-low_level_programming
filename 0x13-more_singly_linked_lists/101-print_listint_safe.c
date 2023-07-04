#include "lists.h"

/**
 * _r - reallocates memory for an array of pointer
 * @list: list to append
 * @size: size of the new list
 * @n: new node to add to the linked list
 *
 * Return: pointer to the new list
 */

const listint_t **_r(const listint_t **list, size_t size, const listint_t *n)
{
	const listint_t **new;
	size_t i = 0;

	new = malloc(size * sizeof(listint_t *));
	if (new == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		new[i] = list[i];
	new[i] = n;
	free(list);
	return (new);
}

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: first node of the list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0, value = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (i = 0; i < value; i++)
		if (head == list[i])
		{
			printf("-> [%p] %d\n", (void *)head, head[0].n);
			free(list);
			return (value);
		}
		value++;
		list = _r(list, value, head);
		printf("[%p] %d\n", (void *)head, head[0].n);
		head = head[0].next;
	}
	free(list);
	return (value);
}
