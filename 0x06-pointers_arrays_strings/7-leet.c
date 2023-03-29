#include "main.h"

/**
 * *leet - encodes a string
 * @n: string to encode
 * Return: n
 */

char *leet(char *n)
{
	int i;
	int j;
	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0 ; n[i] != '\0' ; i++)
	{
		for (j = 0 ; a[j] != '\0' ; j++)
		{
			if (n[i] == a[j])
			{
				n[i] = b[j];
			}
		}
	}
	return (n);
}
