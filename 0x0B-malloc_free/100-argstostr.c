#include "main.h"

/**
 * _strlen - returns the length of the string
 * @s: string to find length
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * argstostr - concatenates all the arguments of my program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to the new string or NULL
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int j, k;
	unsigned int len = 0;
	unsigned int final = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
		len = len + _strlen(av[j]);
	str = malloc(sizeof(char) * (len + ac + 1));
	if (str == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k] != '\0'; k++)
			str[final++] = av[j][k];
		str[final++] = '\n';
	}
	str[final] = '\0';
	return (str);
}
