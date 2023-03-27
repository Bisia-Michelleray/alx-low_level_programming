#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * @s: fuction parameter
 * Return: always 0 (success)
 */

void print_rev(char *s)
{
	int i;
	int count = 0;


	for (i = 0 ; i[s] ; i++)
		count++;
	for (i = count ; i >= 0 ; i--)
	{
		_putchar(i[s]);
	}
	_putchar('\n');
}
