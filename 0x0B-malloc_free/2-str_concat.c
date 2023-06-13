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
	int k;
	int len1;
	int len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	len1 = i + 1;
	while (s2[j] != '\0')
		j++;
	len2 = j + 1;
	conc = malloc(sizeof(char) * (len1 + len2 - 1));

	if (conc != NULL)
	{
		for (k = 0; k <= (len1 - 1); k++)
		{
			conc[k] = s1[k];
		}
		for (k = 0; k <= (len2 - 1); k++)
		{
			conc[(len1 - 1) + k] = s2[k];
		}
	}
	else
		return ('\0');
	return (conc);
}
