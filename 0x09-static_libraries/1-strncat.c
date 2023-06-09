#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number af characters to be appended
 * Return: the destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
