#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: the bit
 * @index: the bits position
 * Return: value of the index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);

	return ((n >> index) & 1);
}
