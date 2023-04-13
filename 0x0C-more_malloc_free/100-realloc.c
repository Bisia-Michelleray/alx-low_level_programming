#include "main.h"

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the previous memory
 * @old_size: size of the allocated space
 * @new_size: size of the new memory block
 * Return: pointer of new memory block or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *j;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		j = malloc(new_size);
		if (j == NULL)
			return (NULL);
		return (j);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	j = malloc(new_size);
	if (j == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
	{
		j[i] = ((char *) ptr)[i];
	}
	free(ptr);
	return (j);
}
