#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: array to execute
 * @size: size of array
 * @action: function to execute
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!size)
		return;
	if (!array)
		return;
	if (!action)
		return;
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
