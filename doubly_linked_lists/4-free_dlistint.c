#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

		while (head)
		{
			current = head;
			head = head->next;
			free(current);
		}
		free(head);
}
