#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node’s data (n)
 * @head: pointer to the first node
 * Return: the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *repl;
	int value;

	if (*head == NULL)
		return (0);

	value = (*head)->n;
	repl = (*head)->next;
	free(*head);
	*head = repl;

	return (value);
}
