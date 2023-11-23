#include "main.h"

/**
 * flip_bits - function that returns the number of bits needed
 * @n: the number
 * @m: when n is flipped
 * Return: flipped number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int flip_count = 0;

	while (xor)
	{
		flip_count += xor & 1;
		xor >>= 1;
	}

	return (flip_count);
}
