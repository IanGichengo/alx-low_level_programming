#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data
 * @head: pointer to the head of the list
 * Return: sum of all the data in the linked list
 */

int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
