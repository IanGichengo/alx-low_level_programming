#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - a function that allocates memory for an array
 * @nmemb: integer
 * @size: integer
 * Return: result
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	char *filler;
	unsigned int k;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	filler = p;

	for (k = 0; k < (size * nmemb); k++)
		filler[k] = '\0';

	return (p);
}
