#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to return the length
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);

	while (s[j] != '\0')
	{
		j++;
	}
	return (j);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: number of bytes of s2
 *
 * Return: NULL or pointer of the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
		n = len2;
	ptr = malloc(sizeof(char) * (len1 + n + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';
	return (ptr);
}
