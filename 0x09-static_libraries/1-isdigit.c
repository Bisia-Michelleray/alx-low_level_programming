#include "main.h"

/**
 * _isdigit - check if numbers are 0 - 9
 * @c: char to check
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
