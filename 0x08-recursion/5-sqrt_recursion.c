#include "main.h"

/**
 * square_root - returns the natural square root of a number
 * @m: result of the square root
 * @n: number to square
 *
 * Return: natural square root of the number or -1
 */

int square_root(int n, int m)
{
	if (n * n == m)
		return (n);
	if (n > m / 2)
		return (-1);
	return (square_root(n + 1, m));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find square root
 *
 * Return: natural square root of a number or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (square_root(0, n));
}
