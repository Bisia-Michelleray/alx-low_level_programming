#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers from 0 to 9
 * Return: always 0 (success)
 */

void print_numbers(void)
{
	int a;

	for (a = 0 ; a <= 9 ; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
}
