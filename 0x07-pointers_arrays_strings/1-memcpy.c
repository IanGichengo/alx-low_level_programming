#include "main.h"

/**
 * _memcpy - copies memory from one location to another
 * @dest: parameter
 * @src: source of memory
 * @n: size of memory
 * Return: destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int u;

	for (u = 0; u < n; u++)
		dest[u] = src[u];
	return (dest);
}
