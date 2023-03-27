#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: parameter one to be swapped
 * @b: parameter two to be swapped
 * Return: always 0 (success)
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
