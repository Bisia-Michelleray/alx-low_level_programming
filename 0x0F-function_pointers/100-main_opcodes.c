#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - prints the opcodes of its own main function
 * @i: pointer to the address of the main function
 * @n: number of bytes of the program
 *
 */

void print_opcodes(char *i, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%.2hhx", i[j]);
		if (j < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}
