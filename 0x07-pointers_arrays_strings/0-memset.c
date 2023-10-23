#include "main.h"

/**
 * _memset - sets the byte value
 * @s: where to set
 * @b: value to be copied
 * @n: parameter
 * Return: byte value
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
		s[k] = b;
	return (s);
}
