#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of the list
 * @h: pointer a list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
