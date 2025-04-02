#include "lists.h"

/**
 * list_len - find a number of the list
 * @h: pointeur of the list
 * Return: number of elements of the list
 */

size_t list_len(const list_t *h)
{
	int num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
