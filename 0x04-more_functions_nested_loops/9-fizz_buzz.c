#include "main.h"
#include <stdio.h>

/**
 * FizzBuzz - prints FizzBuzz when necessary
 *
 * Return: always 0 (success)
 */

void FizzBuzz(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf(FizzBuzz);
		}
		else if (i % 3 == 0)
		{
			printf(Fizz);
		}
		else if (i % 5 == 0)
		{
			printf(Buzz);
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
