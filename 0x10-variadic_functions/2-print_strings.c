#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list strings;

	va_start(strings, n);
	for (; i < n; i++)
	{
		char *str = va_arg(strings, char *);

		if (!str)
			str = "(nil)";
		if (separator && i != (n - 1))
			printf("%s%s", str, separator);
		else
			printf("%s", str);
	}
	printf("\n");
	va_end(strings);
}
