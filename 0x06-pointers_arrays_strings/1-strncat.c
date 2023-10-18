#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates strings and adds number of bytes
 * @dest: parameter
 * @src: parameter
 * @n: int parameter
 * Return: destination
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest + strlen(dest);

	while (*src != '\0' && n--)
		*ptr++ = *src++;
	*ptr = '\0';

	return (dest);
}
