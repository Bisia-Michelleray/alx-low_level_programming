#include "main.h"

/**
 * main - program that multiplies two numbers
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

			return (0);
}
