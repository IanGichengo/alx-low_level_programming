#include "main.h"

/**
 * _strspn - length of prefix substring
 * @s: string
 * @accept: chars that match s
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *p;

	while (*s)
	{
		for (p = accept; *p; p++)
		{
			if (*s == *p)
			{
				count++;
				break;
			}
		}
		if (!*p)
			break;
		s++;
	}
	return (count);
}
