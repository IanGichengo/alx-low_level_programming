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
	int i = 0;
	int word_count = 0;
	int word_index = 0;
	char *word_start = NULL;
	char **words = NULL;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	for (i = 0; str[i]; i++)
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			word_count++;
	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	word_start = strtok(str, " ");
	while (word_start != NULL)
	{
		words[word_index] = strdup(word_start);
		if (words[word_index] == NULL)
		{
			for (i = 0; i < word_index; i++)
				free(words[i]);
			free(words);
			return (NULL);
		}
		word_index++;
		word_start = strtok(NULL, " ");
	}
	words[word_index] = NULL;

	return (words);
}
