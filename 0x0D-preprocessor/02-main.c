#include <stdio.h>

/**
 * main - prints name of the file where it was compiled from
 * Return: always 0 (success)
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
