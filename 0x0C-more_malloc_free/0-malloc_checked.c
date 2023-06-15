#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size to allocate the memory
 *
 * Return: pointer to the allocated memory or status value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;

	ptr = malloc(b);

	if (!ptr)
	{
		exit(98);
	}
	return (ptr);
}
