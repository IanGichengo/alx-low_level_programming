#include "main.h"

/**
 * leet - string into 1337
 * @s: parameter
 * Return: result
 */

char *leet(char *s)
{
	int i;
	int j;
	char *leet = "aAeEoOtTlL";
	char *leet_repl = "4433007711";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; leet[j]; j++)
		{
			if (s[i] == leet[j])
			{
				s[i] = leet_repl[j];
				break;
			}
		}
	}
	return (s);
}
