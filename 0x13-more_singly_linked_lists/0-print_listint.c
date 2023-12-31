#include "lists.h"

/**
 * print_listint - function that prints all the elements
 * @h: points to start of a linked list
 * Return: node size
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
