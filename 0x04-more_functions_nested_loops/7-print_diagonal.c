#include "main.h"

/**
 * print_diagonal - a diagonal line is drawn on the terminal
 * @n: number of characters printed
 */

void print_diagonal(int n)
{
	int up, dap;

	if (n > 0)
	{
		for (up = 0; up < n; up++)
		{
			for (dap = 0; dap < up; dap++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}

	else
		_putchar('\n');
}
