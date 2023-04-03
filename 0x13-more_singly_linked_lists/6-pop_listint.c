#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list,
 * and returns the head node's data (n).
 *
 * @head: A pointer to a pointer to the first node in the listint_t list.
 *
 * Return: The head node's data (n).
 *         If the linked list is empty, return 0.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}

