#include "main.h"

/**
 * _memset - sets byte value
 * @s: where to set
 * @b: value to be copied
 * @n: parameter
 * Return: byte value
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
