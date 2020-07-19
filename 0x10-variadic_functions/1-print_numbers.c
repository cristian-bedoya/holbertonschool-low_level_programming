#include "variadic_functions.h"

/**
 * print_numbers - prints
 * @separator: string to be printed between numbers
 * @n: number of arguments passed to the function
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	int element;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		element = va_arg(list, int);
		if (i < (n - 1))
		{
			if (separator)
				printf("%d%s", element, separator);
			else
				printf("%d", element);
		}
		else if (i == (n - 1))
			printf("%d\n", element);
	}
	va_end(list);
}
