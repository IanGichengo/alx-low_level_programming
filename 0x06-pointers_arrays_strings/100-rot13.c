#include "main.h"

/**
 * rot13 - encodes string to rot13
 * @s: parameter
 * Return: result
 */

char *rot13(char *s)
{
	int p, k;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (p = 0; s[p] != '\0'; p++)
	{
		for (k = 0; a[k] != '\0'; k++)
		{
			if (s[p] == a[k])
			{
				s[p] = b[k];
				break;
			}
		}
	}
	return (s);
}
