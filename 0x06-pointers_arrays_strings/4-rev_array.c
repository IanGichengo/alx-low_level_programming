#include "main.h"

/**
 * reverse_array - reverses an array
 * @n: parameter
 * @a: array
 */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
