#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _realloc - function that allocates a memory block
 * @ptr: parameter
 * @old_size: size before
 * @new_size: size after
 * Return: result
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);

	if (p == NULL)
		return (NULL);

	memcpy(p, ptr, old_size < new_size ? old_size : new_size);
	free(ptr);
	return (p);
}
