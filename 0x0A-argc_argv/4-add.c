#include "main.h"

/**
 * main - program that adds positive numbers
 * @argv: array of arguments passed
 * @argc: number of arguments passed
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i, j;
	unsigned int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				return (puts("Error"), 1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	return (printf("%d\n", sum), 0);
}
