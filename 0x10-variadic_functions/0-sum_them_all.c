#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 *
 * Return: 0 or sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list param;
	int sum;
	unsigned int i = 0;

	sum = 0;

	va_start(param, n);

	if (n != 0)
	{
		for (; i < n; i++)
			sum = sum + va_arg(param, int);
	}
	va_end(param);
	return (sum);

	if (n == 0)
	{
		return (0);
	}
	return (sum);
}
