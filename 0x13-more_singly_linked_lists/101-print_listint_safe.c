#include "lists.h"

/**
 * print_listint_safe - function that prints a linked list
 * @head: points to a linked list
 * Return: count
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	const listint_t *slow_ptr, *fast_ptr;

	if (head == NULL)
		exit(98);

	slow_ptr = head;
	fast_ptr = head;

	while (slow_ptr != NULL && fast_ptr != NULL && fast_ptr->next != NULL)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr  = fast_ptr->next->next;

		if (slow_ptr == fast_ptr)
		{
			printf("-> [%p] %d\n", (void *)slow_ptr, slow_ptr->n);
			return (nodes);
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
	}

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
	}
	return (nodes);
}
