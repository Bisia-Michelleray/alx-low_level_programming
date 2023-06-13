#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: NULL or pointer to the string
 */

char *str_concat(char *s1, char *s2)
{
	char *conc;
	int i;
	int j;
	int len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] || s2[i]; i++)
		len++;
	conc = malloc(sizeof(char) * len);

	if (conc == NULL)
	return (NULL);

	for (i = 0; s1[i]; i++)
		conc[j++] = s1[i];

	for (i = 0; s2[i]; i++)
		conc[j++] = s2[i];

	return (conc);
}
