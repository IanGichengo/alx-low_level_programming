#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: where the search occurs
 * @needle: what is being located
 * Return: null
 */

char *_strstr(char *haystack, char *needle)
{
	char *p1, *p2;

	if (!*needle)
		return (haystack);
	while (*haystack)
	{
		p1 = haystack;
		p2 = needle;

		while (*p1 && *p2 && *p1 == *p2)
		{
			p1++;
			p2++;
		}

		if (!*p2)
			return (haystack);
		haystack++;
	}
	return (NULL);
}
