#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: input one
 * @max: input two
 * Return: pointer of new array or NULL
 */

int *array_range(int min, int max)
{
	int i = 0, len;
	int *j;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	j = malloc(sizeof(int) * len);
	if (j == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		j[i] = min++;
	return (j);
}
