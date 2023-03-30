#include "main.h"

/**
 * *rot13 - encodes a string using rot 13
 * @n: string to encode
 * Return: n
 */

char *rot13(char *n)
{
	int i;
	int j;
	char *a = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *b = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0 ; n[i] != '\0' ; i++)
	{
		for (j = 0 ; j < 52 ; j++)
		{
			if (n[i] == a[j])
			{
				n[i] = b[j];
				break;
			}
		}
	}
	return (n);
}
