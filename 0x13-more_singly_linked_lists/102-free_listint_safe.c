#include "lists.h"

/**
 * free_listint_safe - function that frees a list
 * @h: it is a pointer to a pointer to a listint_t structure
 * Return: size
 */

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *temp;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h != NULL)
	{
		size++;
		if (*h - (*h)->next > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
		else
		{
			free(*h);
			*h = NULL;
			break;
		}
	}
	*h = NULL;
	return (size);
}

