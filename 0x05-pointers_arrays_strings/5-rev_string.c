#include "main.h"

/**
 * rev_string - string reverse
 * @s: parameter
 */

void rev_string(char *s)
{
	int len = 0;
	char *start = s;
	char *end = s;
	char temp;

	while (*end != '\0')
	{
		end++;
		len++;
	}
	end--;

	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
