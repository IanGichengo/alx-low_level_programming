#include "main.h"
#include <string.h>

/**
 * puts_half - outputs half of a string
 * @str: string parameter
 */

void puts_half(char *str)
{
	int g;
	int length = strlen(str);
	int n = (length - 1) / 2;

	if (length % 2 == 0)
	{
		for (g = length / 2; g < length; g++)
		{
			_putchar(str[g]);
		}
	}

	else
	{
		for (g = n + 1; g < length; g++)
		{
			_putchar(str[g]);
		}
	}
	_putchar('\n');
}
