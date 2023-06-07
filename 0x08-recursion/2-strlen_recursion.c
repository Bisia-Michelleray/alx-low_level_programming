#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to return length
 *
 * Return: always 0 (success)
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
