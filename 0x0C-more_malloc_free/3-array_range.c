#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: smallest number in the array
 * @max: largest number in the array
 *
 * Return: pointer to the newly created array or NULL
 */

int *array_range(int min, int max)
{
	int *ptr = NULL;
	int i;
	unsigned int j = 0;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		ptr[j] = i;
		j++;
	}
	return (ptr);
}
