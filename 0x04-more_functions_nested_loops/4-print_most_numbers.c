#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints numbers from 0 to 9
 * Return: always 0 (success)
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			putchar(i + '0');
		}
	}
	putchar('\n');
}
