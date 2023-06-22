#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i = 0;
	unsigned int temp_value = 0;

	va_start(numbers, n);

	for (; i < n; i++)
	{
		temp_value = va_arg(numbers, int);

		if (separator != NULL && i != (n - 1))
			printf("%d%s", temp_value, separator);
		else
			printf("%d", temp_value);
	}
	va_end(numbers);
	printf("\n");
}
