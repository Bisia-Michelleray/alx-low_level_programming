#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the first node of the list
 *
 */

void free_list(list_t *head)
{
	list_t *tmp_value;

	while (head != NULL)
	{
		tmp_value = head[0].next;
		free(head[0].str);
		free(head);
		head = tmp_value;
	}
	free(head);
}
