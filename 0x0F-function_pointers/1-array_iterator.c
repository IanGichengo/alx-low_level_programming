#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as parameter
 * @array: points to first element
 * @size: size of array
 * @action: points to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
