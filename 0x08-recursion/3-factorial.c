#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number to be factored
 *
 * Return: -1 or 1
 */

int factorial(int n)
{
	int next_number;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	next_number = factorial(n - 1);
	return (n * next_number);
}
