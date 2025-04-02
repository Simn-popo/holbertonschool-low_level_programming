#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_list - print elements of the list
 * @h: pointer of the list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int len = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
			else
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
			len++;
	}
	return (len);
}
