#include "main.h"

/**
 * puts2 - prints all characters of a string
 * @str: parameter
 */

void puts2(char *str)
{
	int b = 0;

	while (*(str + b) != '\0')
	{
		if (b % 2 == 0)
			_putchar(*(str + b));
		b++;
	}
	_putchar(10);
}
