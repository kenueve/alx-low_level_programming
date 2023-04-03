#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to a pointer to the beginning of the list.
 * @idx: index of the list where the new node should be added.
 * @n: data of the new node.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = NULL, *prev_node = NULL, *curr_node = NULL;
	unsigned int i;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;

	if (!idx)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	curr_node = *head;
	for (i = 0; i < idx; i++)
	{
		prev_node = curr_node;
		curr_node = curr_node->next;
		if (!curr_node && i == idx - 1)
		{
			prev_node->next = new_node;
			new_node->next = NULL;
			return (new_node);
		}
		else if (!curr_node)
		{
			free(new_node);
			return (NULL);
		}
	}
	prev_node->next = new_node;
	new_node->next = curr_node;
	return (new_node);
}
