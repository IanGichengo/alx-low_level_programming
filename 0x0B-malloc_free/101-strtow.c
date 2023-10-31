#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * strtow - function that splits into words
 * @str: string
 * Return: result
 */

char **strtow(char *str)
{
	char **words;
	int n, i, in_word;
	char *p, *q;

	if (str == NULL || *str == '\0')
		return (NULL);

	n = in_word = 0;
	for (p = str; *p != '\0'; p++)
		if (*p != ' ' && in_word == 0)
			n++, in_word = 1;
		else if (*p == ' ' && in_word == 1)
			in_word = 0;

	words = (char **)malloc((n + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	words[n] = NULL;
	for (i = 0; i < n; i++)
	{
		while (*str == ' ')
			str++;

		p = str;
		while (*p != ' ' && *p != '\0')
			p++;

		words[i] = (char *)malloc((p - str + 1) * sizeof(char));
			if (words[i] == NULL)
				return (NULL);
		q = words[i];
		while (str < p)
			*q++ = *str++;
		*q = '\0';
	}
	return (words);
}

