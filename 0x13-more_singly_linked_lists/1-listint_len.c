#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * @h: points to list
 * Return: list length
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}

