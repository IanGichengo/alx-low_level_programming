#include "main.h"
#include <stddef.h>

/**
 * _strchr - returns character to string
 * @s: what is being searched
 * @c: character that is found
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int k;

	for (k = 0; s[k] >= '\0'; k++)
	{
		if (s[k] == c)
			return (s + k);
	}
	return ('\0');
}
