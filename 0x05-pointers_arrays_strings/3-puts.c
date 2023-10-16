#include "main.h"

/**
 * _puts - string followed by a new line
 * @str: parameter
 */

void _puts(char *str)
{
	int y = 0;

	while (*(str + y) != '\0')
	{
		_putchar(*(str + y));
		y++;
	}
	_putchar(10);
}
