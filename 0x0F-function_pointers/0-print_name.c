#include "function_pointers.h"

/**
 * print_name- prints a name
 * @name: name to print
 * @f: pointer to the function to print
 * Return: always 0 (success)
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
