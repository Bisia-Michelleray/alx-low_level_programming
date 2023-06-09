#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: parameter to return length of a string
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; i[s] != '\0' ; i++)
	{
		count++;
	}
	return (count);
}
