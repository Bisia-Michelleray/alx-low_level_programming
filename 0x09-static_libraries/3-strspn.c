#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: main string
 * @accept: bytes to be used
 * Return: always 0 (success)
 */

unsigned int _strspn(char *s, char *accept)
{
	int r;
	unsigned int n = 0;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			} else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
