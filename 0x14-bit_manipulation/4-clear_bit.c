#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0
 * @n: points to a bit
 * @index: position changed
 * Return: 1 - success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8))
		return (-1);

	*n = *n & ~(1 << index);

	return (1);
}
