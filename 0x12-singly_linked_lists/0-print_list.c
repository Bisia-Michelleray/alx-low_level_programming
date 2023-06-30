#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the first element of list_t
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int value = 0;
	const list_t *temp = h;
	char nul[] = "(nil)";

	if (!temp)
		return (0);
	if (temp)
	{
		while (temp != NULL)
		{
			if (temp[0].str != NULL)
			{
				printf("[%d] %s\n", temp[0].len, temp[0].str);
			}
			else
			{
				printf("[0] %s\n", nul);
			}
			temp = temp[0].next;
			value++;
		}
	}
	return (value);
}
