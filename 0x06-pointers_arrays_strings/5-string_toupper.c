#include "main.h"

/**
 * string_toupper - converts characters to uppercase
 * @s: parameter
 * Return: capital letters
 */

char *string_toupper(char *s)
{
	char *ptr = s;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
			*ptr -= 32;
		ptr++;
	}

	return (s);
}
