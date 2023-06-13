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
	int len;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
		len++;
	copy = malloc(sizeof(char) * (len + 1));

	if (copy == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		copy[i] = str[i];
	}
	copy[len] = '\0';
	return (copy);
}
