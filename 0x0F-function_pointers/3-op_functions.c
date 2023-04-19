#include "3-calc.h"

/**
 * op_add - returns the sum of two integers
 * @a: first integer
 * @b: second integer
 * Return: always 0 (success)
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of two integers
 * @a: first integer
 * @b: second integer
 * Return: always 0 (success)
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the products of two integers
 * @a: first integer
 * @b: second integer
 * Return: always 0 (success)
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division of two integers
 * @a: first integer
 * @b: second integer
 * Return: always 0 (success)
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod- returns the remainder of the division previously
 * @a: first integer
 * @b: second integer
 * Return: always 0 (success)
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
