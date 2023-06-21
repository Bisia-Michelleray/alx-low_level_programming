#include "function_pointers.h"

/**
 * print_name - prints a name
 * @f: callback function
 * @name: name to print
 */

void print_name(char *name, void (*f)(char *))
{
	if (!f)
		return;
	if (!name)
		return;
	(*f)(name);
}
