#include "main.h"

/**
 * positive_or_negative - tests function if integer is positive or negative
 *
 * @i: parameter to be checked
 *
 * Return: always 0 (success)
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
