#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: points to the address of the head of the list
 * @index: nodes position
 * Return: null if node isnt found
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
