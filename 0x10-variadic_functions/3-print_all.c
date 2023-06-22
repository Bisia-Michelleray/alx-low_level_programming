#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	va_list anything;
	char *str;

	va_start(anything, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
			printf("%c", va_arg(anything, int));
			break;
			case 'i':
			printf("%i", va_arg(anything, int));
			break;
			case 'f':
			printf("%f", va_arg(anything, double));
			break;
			case 's':
			str = va_arg(anything, char *);
			if (!str)
			{
				str = "(nil)";
				break;
			}
			printf("%s", str);
			break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f'
		|| format[i] == 's') && (format[i + 1] != '\0'))
			printf(", ");
		i++;
	}
	va_end(anything);
	printf("\n");
}
