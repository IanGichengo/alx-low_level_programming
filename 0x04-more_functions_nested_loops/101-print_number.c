#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: it is a variable
 */

void print_number(int n)
{
	unsigned int bob;

	if (n < 0)
	{
		_putchar('_');
		bob = -n;
	}

	else
		bob = n;

	if (bob / 10)
		print_number(bob / 10);
	_putchar((bob % 10) + '0');
}
