#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - Write a function that allocates memory for an array, using malloc
 * @nmemb: array we want to concatenate
 * @size: array we want to concatenate
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *result;
	unsigned int total_size;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total_size = nmemb * size;
	result = malloc(total_size);
	if (result == NULL)
		return (NULL);

	ptr = (char *)result;
	while (total_size--)
		*ptr++ = 0;
	return (result);
}
