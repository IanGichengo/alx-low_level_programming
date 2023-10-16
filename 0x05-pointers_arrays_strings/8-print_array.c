#include "main.h"
#include <stdio.h>

/**
 * print_array - element of an array in the integer
 * @a: array
 * @n: parameter
 */

void print_array(int *a, int n)
{
	int y;

	for (y = 0; y < n; y++)
	{
		if (y != (n - 1))
			printf("%d, ", a[y]);
		else
			printf("%d", a[y]);
	}
	printf("\n");
}
