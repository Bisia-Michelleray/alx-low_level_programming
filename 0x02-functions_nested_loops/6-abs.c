#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 *
 * @a: prototype that is checked
 *
 * Return: absolute value of an integer
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
