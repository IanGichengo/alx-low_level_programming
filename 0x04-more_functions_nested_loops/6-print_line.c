#include "main.h"

/**
 * print_line - draws a line on the terminal
 * @n: number of characters printed
 */

void print_line(int n)
{
	int line;

	for (line = 0; line < n; line++)
		_putchar('_');
	_putchar('\n');
}
