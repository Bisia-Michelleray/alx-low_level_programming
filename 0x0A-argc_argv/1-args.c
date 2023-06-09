#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * @argv: array of arguments passed
 * @argc: number of arguments passed
 *
 * Return: always 0 (success)
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
