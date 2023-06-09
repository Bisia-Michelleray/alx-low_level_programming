#include "main.h"

/**
 * main - prints the minimum number of coins
 * @argv: array of arguments passed
 * @argc: number of arguments passed
 *
 * Return: alway 0 (success)
 */

int main(int argc, char *argv[])
{
	int cents = 0;
	int coins = 0;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents = cents - 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents = cents - 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents = cents - 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents = cents - 2;
			continue;
		}
		cents--;
	}
	printf("%d\n", coins);
	return (0);
}
