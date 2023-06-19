#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from
 *
 * Return: always 0 (success)
 */

int main(void)
{
	puts(__BASE_FILE__);
	return (0);
}
