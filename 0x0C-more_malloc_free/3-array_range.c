#include "main.h"
#include <stdlib.h>

/**
 * array_range -function that creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: result
 */

int *array_range(int min, int max)
{
	int *p;
	int k;

	if (min > max)
		return (NULL);

	p = malloc((max - min + 1) * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (k = 0; min <= max; k++, min++)
		p[k] = min;

	return (p);
}
