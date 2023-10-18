#include "main.h"

/**
 * cap_string - uppercase all words
 * @s: parameter
 * Return: uppercase string
 */

char *cap_string(char *s)
{
	int i;
	int cap = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (cap && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
			cap = 0;
		}
		else if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
				s[i] == ',' || s[i] == ';' || s[i] == '.' ||
				s[i] == '!' || s[i] == '?' || s[i] == '"' ||
				s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
			cap = 1;
		else
			cap = 0;
	}
	return (s);
}
