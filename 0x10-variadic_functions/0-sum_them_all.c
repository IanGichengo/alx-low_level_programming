#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: arguments number
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int k;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (k = 0; k < n; k++)
		sum += va_arg(args, int);

	va_end(args);
	return (sum);
}
