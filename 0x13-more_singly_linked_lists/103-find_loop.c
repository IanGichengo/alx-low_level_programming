#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: it is a reference to the first node in the linked list
 * Return: null
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	if (head == NULL)
		return (NULL);

	tortoise = hare = head;

	while (tortoise && hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
			tortoise = head;

			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}

			return (tortoise);
		}
	}
	return (NULL);
}
