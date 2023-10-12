#include "main.h"

/**
 * more_numbers - numbers 0 - 14 are printed ten times
 */

void more_numbers(void)
{
	int l, g;

	for (l = 0; l < 10; l++)
	{
		for (g = 0; g <= 14; g++)
		{
			if (g >= 10)
				_putchar(g / 10 + '0');
			_putchar(g % 10 + '0');
		}
		_putchar('\n');
	}
}
