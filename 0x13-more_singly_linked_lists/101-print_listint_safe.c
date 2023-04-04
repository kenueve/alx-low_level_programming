#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *slow = head, *fast = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *) slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;
		count++;
		if (slow == fast)
		{
			printf("[%p] %d\n", (void *) slow, slow->n);
			count++;
			break;
		}
	}

	if (slow == NULL || fast == NULL || fast->next == NULL)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *) head, head->n);
			head = head->next;
			count++;
		}
	}

	return (count);
}
