#include "main.h"

/**
 * print_triangle - outputs a triangle
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int k, l;

	if (size > 0)
	{
		for (k = 1; k <= size; k++)
		{
			for (l = size - k; l > 0; l--)
				_putchar(' ');

			for (l = 0; l < k; l++)
				_putchar('#');

			if (k == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
