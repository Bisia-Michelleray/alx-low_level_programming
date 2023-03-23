#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * Return: always 0 (success)
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (j = 0 ; j <= 14 ; j++)
		{
		if (j > 9)
		{
		putchar ((j / 10) + '0');
		}
	putchar((j % 10) + '0');
		}
	putchar('\n');
	}
}
