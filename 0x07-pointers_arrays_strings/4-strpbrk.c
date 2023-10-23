#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for a set of bytes
 * @s: search
 * @accept: result
 * Return: null
 */

char *_strpbrk(char *s, char *accept)
{
	char *k;

	while (*s)
	{
		for (k = accept; *k; k++)
		{
			if (*s == *k)
				return (s);
		}
		s++;
	}
	return (NULL);
}
