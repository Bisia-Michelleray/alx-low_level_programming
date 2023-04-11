#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: char to be checked
 *
 * Return: pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *s = malloc(size);

	if (size == 0 || s == 0)
		return (NULL);
	while (size--)
		s[size] = c;
	return (s);
}
