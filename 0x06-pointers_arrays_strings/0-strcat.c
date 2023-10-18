#include "main.h"
#include <string.h>

/**
 * _strcat - puts two strings together
 * @dest: parameter
 * @src: parameter
 * Return: destination
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest + strlen(dest);

	while (*src != '\0')
		*ptr++ = *src++;
	*ptr = '\0';

	return (dest);
}
