#include "main.h"

/**
 * print_times_table - function that prints the n times table
 *
 * @n: parameter to be checked
 *
 * Return: always 0 (success)
 */

void print_times_table(int n)
{
	int num, mult, prod;

	if (n >= 0 && n <= 15)
	{
		for (num = 0 ; num <= n ; num++)
		{
			_putchar('0');
			for (mult = 1 ; mult <= n ; mult++)
			{
				_putchar(',');
				_putchar(' ');
				prod = num * mult;

				if (prod <= 99)
					_putchar(' ');
				if (prod <= 99)
					_putchar(' ');
				if (prod >= 100)
				{
					_putchar((prod / 100) + 48);
					_putchar(((prod / 10)) % 10 + 48);
				}
				else if (prod <= 99 && prod >= 10)
					_putchar((prod / 10) + 48);
				_putchar((prod % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
