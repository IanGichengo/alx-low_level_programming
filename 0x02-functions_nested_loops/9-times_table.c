#include "main.h"

/**
 * times_table - print a multiplication table
 * Return: 0 success
 */

void times_table(void)
{
	int i;
	int product;
	int multiply;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');

		for (multiply = 1; multiply <= 9; multiply++)
		{
			_putchar(',');
			_putchar(' ');

			product = i * multiply;

			if (product <= 9)
				_putchar(' ');

			else
				_putchar((product / 10) + '0');
			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
