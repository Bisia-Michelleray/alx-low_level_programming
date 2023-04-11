#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: string to duplicated
 *
 * Return: pointer to a new string or NULL
 */

char *_strdup(char *str)
{
	int j = 0, i = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		i++;
	}
	s = malloc(sizeof(char) * i);
	if (s == NULL)
		return (NULL);
	while (j < i)
	{
		s[j] = str[j];
		j++;
	}
	s[j] = '\0';
	return (s);
}
