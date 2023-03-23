#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square
 * @size: size of the square
 * Return: always 0 (success)
 */

void print_square(int size)
{
	int x;
	int y;

	if (size <= 0)
	{
		putchar('\n');
	}
		else
		{
			for (x = 0 ; x < size ; x++)
			{
				for (y = 0 ; y < size ; y++)
				{
					putchar(35);
				}
				putchar('\n');
			}
		}
}
