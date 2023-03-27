#include "main.h"

/**
 * puts2 - prints every other character
 * @str: character to be printed
 * Return: always 0 (success)
 */

void puts2(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
