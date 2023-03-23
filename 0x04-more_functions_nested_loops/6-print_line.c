#include "main.h"
#include <stdio.h>

/**
 * print_line - draws a staight line in the terminal
 * @n: number of times character is printed
 * Return: always 0 (success)
 */

void print_line(int n)
{
	int m;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (m = 0 ; m < n ; m++)
		{
			putchar(95);
		}
		putchar('\n');
	}
}
