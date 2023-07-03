#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: first node of the linked list
 * @n: element to add in the new node
 *
 * Return: address of the new element or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head;

	new_head = malloc(sizeof(listint_t));
	if (new_head == NULL)
		return (NULL);
	new_head[0].n = n;
	new_head[0].next = NULL;

	if (!head)
		return (NULL);
	if (head)
		new_head[0].n = n;
	new_head[0].next = *head;
	*head = new_head;
	return (new_head);
}
