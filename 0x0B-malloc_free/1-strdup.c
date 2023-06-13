#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: original string
 *
 * Return: NULL or pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *copy;
	unsigned int i = 0;

	if (!str)
		return (NULL);
	copy = malloc(sizeof(char) * (i +  1));
	if (!copy)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		copy[i] = str[i];
	}
	return (copy);
}
