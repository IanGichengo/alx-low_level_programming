#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array input
 * @size: size of the array
 * @cmp: points to function
 * Return: first element index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (array != NULL && cmp != NULL)
	{
		for (k = 0; k < size; k++)
		{
			if (cmp(array[k]))
				return (k);
		}
	}

	return (-1);
}
