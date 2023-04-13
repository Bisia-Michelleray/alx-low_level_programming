#include "main.h"

/**
 * _calloc - allocates memory r=for an array
 * @nmemb: elements of an array
 * @size: number of bytes
 * Return: pointer or zero
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, j = 0;
	char *k;

	if (nmemb == 0 || size == 0)
		return (NULL);
	j = nmemb * size;
	k = malloc(j);
	if (k == NULL)
		return (NULL);
	while (i < j)
	{
		k[i] = 0;
		i++;
	}
	return (k);
}
