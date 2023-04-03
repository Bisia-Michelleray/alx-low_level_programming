#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: input
 * @size: input
 * Return: always 0 (success)
 */

void print_diagsums(int *a, int size)
{
	int b, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (b = 0; b < size ; b++)
	{
		sum1 = sum1 + a[b * size + b];
	}
	for (b = size - 1; b >= 0; b--)
	{
	sum2 += a[b * size + (size - b - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
