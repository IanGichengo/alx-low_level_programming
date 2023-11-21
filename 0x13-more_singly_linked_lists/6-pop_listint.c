#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a list
 * @head: points to linked list
 * Return: head
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	n = temp->n;
	*head = (*head)->next;
	free(temp);
	return (n);
}
