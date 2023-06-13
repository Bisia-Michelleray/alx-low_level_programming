#include "main.h"

/**
 * w_count - counts the number of words in a string
 * @s: string to count
 *
 * Return: number of words counted
 */

int w_count(char *s)
{
	int i;
	int n = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				n++;
		}
		else if (i == 0)
			n++;
	}
	n++;
	return (n);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings or NULL
 */

char **strtow(char *str)
{
	int i, j, k, l, n = 0, words = 0;
	char **split;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = w_count(str);
	if (n == 1)
		return (NULL);
	split = (char **)malloc(n * sizeof(char *));
	if (split == NULL)
		return (NULL);
	split[n - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
			j++;
			split[words] = (char *)malloc(j * sizeof(char));
			j--;
			if (split[words] == NULL)
			{
				for (k = 0; k < words; k++)
				free(split[k]);
				free(split[n - 1]);
				free(split);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				split[words][l] = str[i + l];
			split[words][l] = '\0';
			words++;
			i = i + j;
		}
		else
			i++;
	}
	return (split);
}
