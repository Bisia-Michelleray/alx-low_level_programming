#include "main.h"

/**
 * main -  prints the program name followed by a new line
 * @argv: array of arguments
 * @argc: number of arguments
 *
 * Return: always 0 (success)
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int i = 0;

	while (*(argv[0] + i) != '\0')
	{
		putchar(*(argv[0] + i));
		i++;
	}
	putchar('\n');
	return (0);
}
