#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times to be printed
 * Return: always 0 (success)
 */

void print_diagonal(int n)
{
	int m;
	int p;


	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
	for (m = 0 ; m < n ; m++)
	{
	for (p = 0 ; p < m ; p++)
	{
	putchar(32);
	}
	putchar(92);
	putchar('\n');
	}
	}
}
