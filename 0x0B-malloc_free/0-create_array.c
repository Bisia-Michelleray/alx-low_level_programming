#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: char to assign
 *
 * Return: pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	i = 0;
	{
		str = malloc(sizeof(char) * size);
		if (str == 0 || str == NULL)
			return (NULL);
	}
	for (; i < size ; i++)
		str[i] = c;
	return (str);
}
