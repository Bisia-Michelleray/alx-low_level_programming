#include "main.h"

/**
 * prime - funtion to check wether the number is prime or not
 * @i: number 1 for test
 * @n: number 2
 *
 * Return: 1 or 0
 */

int prime(int i, int n)
{
	if (i > (n / 2))
		return (1);
	else if (n % i == 0)
		return (0);
	return (prime(i + 1, n));
}

/**
 * is_prime_number - returns 1 if the integer is prime otherwise 0
 * @n: number to evaluate
 *
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(2, n));
}
