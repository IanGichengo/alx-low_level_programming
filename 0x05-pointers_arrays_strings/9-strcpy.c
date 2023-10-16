#include "main.h"

/**
 * _strcpy - paste and copy string
 * @dest: destination
 * @src: source
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int y = 0;

	while (src[y] != '\0')
	{
		dest[y] = src[y];
		y++;
	}

	dest[y] = '\0';
	return (dest);
}
