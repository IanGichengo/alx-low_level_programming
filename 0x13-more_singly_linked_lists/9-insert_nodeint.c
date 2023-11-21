#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * @head: points to the address of the head in the linked list
 * @idx: position of the list where the new node is added
 * @n: data for the node
 * Return: null
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current_node = *head;
	listint_t *prev_node = NULL;
	unsigned int i = 0;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (current_node != NULL && i < idx)
	{
		prev_node = current_node;
		current_node = current_node->next;
		i++;
	}
	if (i != idx)
	{
		free(new_node);
		return (NULL);
	}
	prev_node->next = new_node;
	new_node->next = current_node;
	return (new_node);
}
