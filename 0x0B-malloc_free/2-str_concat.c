#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string one to concatenate
 * @s2: string two
 *
 * Return: pointer of string or NULL
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0;
	unsigned int j = 0;
	int len = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (; s1[i]; i++)
		len++;
	for (; s2[j]; j++)
		len++;
	str = malloc((sizeof(char) * (i + j)) + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; s2[j]; j++)
	{
		str[i + j] = s2[j];
	}
	return (str);
}
