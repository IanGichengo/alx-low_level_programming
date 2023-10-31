#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup -it returns a pointer to a newly allocated space
 * @str: string
 * Return: result
 */

char *_strdup(char *str)
{
	char *new_str;
	size_t len;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	new_str = malloc(sizeof(char) * (len + 1));

	if (new_str == NULL)
		return (NULL);
	memcpy(new_str, str, len + 1);
	return (new_str);
}
