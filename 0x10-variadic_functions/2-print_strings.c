#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to be printed between numbers
 * @n: number of arguments passed to the function
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	char *str;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (!str)
			str = "(nill)";
		if (i != (n - 1))
		{
			if (separator)
				printf("%s%s", str, separator);
			else
				printf("%s", str);
		}
		else
			printf("%s\n", str);
	}
}
