#include "main.h"

/**
 * _strcmp - compares two strings
 * @s2: string 2
 * @s1: string 1
 * Return: result if numbers are same or not
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
