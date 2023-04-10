#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: main string
 * @accept: string that contains umber of bytes to be matched
 * Return: string
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}

