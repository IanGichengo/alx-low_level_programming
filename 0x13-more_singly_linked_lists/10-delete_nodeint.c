#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: points to a list
 * @index: position of the node
 * Return: 1 when successful, -1 when it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node = *head;
	listint_t *prev_node = NULL;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(current_node);
		return (1);
	}
	while (current_node != NULL && i < index)
	{
		prev_node = current_node;
		current_node = current_node->next;
		i++;
	}
	if (current_node == NULL)
		return (-1);
	prev_node->next = current_node->next;
	free(current_node);
	return (1);
}
