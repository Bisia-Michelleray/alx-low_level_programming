#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size in bytes of the previously allocated memory in ptr
 * @new_size: size in bytes of the new memory block
 *
 * Return: NULL or new pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *block;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	block = malloc(new_size);
	if (block == NULL)
		return (NULL);
	if (ptr == NULL)
		return (block);
	block = _memcpy(block, ptr, (new_size > old_size ? old_size : new_size));
	free(ptr);
	return (block);
}


/**
 * _memcpy - copies memory from src to dest
 * @dest: destination of the memory
 * @src: souurce of memory
 * @n: number of bytes from src
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
