#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: num1
 * @y: num2
 *
 * Return: -1 or value of x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	y--;
	return (x * _pow_recursion(x, y));
}
