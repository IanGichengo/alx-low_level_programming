#include "lists.h"

/**
 * print_listint_safe - function that prints a linked list
 * @head: points to a linked list
 * Return: count
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *slow = head;
	const listint_t *fast = head;
	int loop = 0;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		head = head->next;
		if (loop == 0)
		{
			if (slow == fast && count > 1)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				loop = 1;
			}
			slow = slow->next;
			if (fast->next != NULL)
				fast = fast->next->next;
		}
		if (loop == 1 && head == slow)
			break;
	}
	return (count);
}
