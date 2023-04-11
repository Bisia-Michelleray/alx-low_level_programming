#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: char to assign
 * Descriptin: create an array of size size and assign char c
 * Return: pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (str == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size ; i++)
		str[i] = c;
	return (str);
}