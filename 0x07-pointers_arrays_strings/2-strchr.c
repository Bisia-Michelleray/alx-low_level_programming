#include "main.h"

/**
 * _strchr - locates character in a string
 * @s: string to locate
 * @c: character in the string
 * Return: a string
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
