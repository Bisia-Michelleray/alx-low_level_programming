#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
