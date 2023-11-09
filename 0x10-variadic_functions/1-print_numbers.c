#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers followed by new line
 * @separator: printed string
 * @n: integers passed to function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int k;

	va_start(args, n);

	for (k = 0; k < n; k++)
	{
		printf("%d", va_arg(args, int));
		if (k < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
