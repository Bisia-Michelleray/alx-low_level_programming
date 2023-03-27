#include "main.h"

/**
 * *_strcpy - copies the string pointed
 * @dest: function one
 * @src: fuction two
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	if (dest == NULL)
		return (NULL);
	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];
	return (dest);
}
