#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: elements aof an array
 * @size: bytes of each element of the array
 *
 * Return: pointer to the allocated memory or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr = NULL;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size * nmemb; i++)
	{
		ptr[i] = 0;
	}
	return ((void *)ptr);
}
