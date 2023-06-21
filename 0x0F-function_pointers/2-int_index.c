#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search the integer from
 * @size: number of elements in the array array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int j = 0;

	if (size > 0 && cmp && size && array)
	{
		for (i = 0; i < size; i++)
		{
		j = cmp(array[i]);
		if (j == 1)
			return (i);
		}
		return (-1);
	}
	return (-1);
}
