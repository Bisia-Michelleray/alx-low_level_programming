#include "3-calc.h"

/**
 * main - prints what is required after the operations
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int k, l, m;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	k = atoi(argv[1]);
	l = atoi(argv[3]);
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		puts("Error");
		exit(99);
	}
	m = f(k, l);
	printf("%d\n", m);
	return (0);
}
