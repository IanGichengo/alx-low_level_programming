#include "main.h"

/**
 * print_last_digit - outputs the last digit in a number
 * @g: variable
 * Return: 0 success
 */

int print_last_digit(int g)
{
	int last_digit = g % 10;

	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
