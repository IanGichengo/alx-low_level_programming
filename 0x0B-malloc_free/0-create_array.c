#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters and innitializes it
 * @size: integer
 * @c: parameter
 * Return: result
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int k;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);
	for (k = 0; k < size; k++)
		array[k] = c;
	return (array);
}
