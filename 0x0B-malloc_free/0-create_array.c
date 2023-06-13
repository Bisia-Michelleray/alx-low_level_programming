#include "main.h"

/**
 * create_array - creates an array of chars initializes with a specific char
 * @size: size of the array
 * @c: char to initialize the array
 *
 * Return: 0 or pointer to the array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
