#include "main.h"

/**
 * print_sign - checks sign of a number
 * @n: variable
 * Return: 1 when number is positive, 0 when number is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
