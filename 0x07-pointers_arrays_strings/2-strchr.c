#include "main.h"
#include <stddef.h>

/**
 * _strchr - returns character to string
 * @s: what is searched
 * @c: character found
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int p;

	for (p = 0; s[p] >= '\0'; p++)
	{
		if (s[p] == c)
			return (s + p);
	}
	return ('\0');
}
