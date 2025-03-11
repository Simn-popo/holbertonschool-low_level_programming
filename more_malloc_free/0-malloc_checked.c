#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *malloc_checked - Write a function that allocates memory using malloc
 * @b: number
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void *malloc_checked(unsigned int b)
{
	int *pb;

	pb = malloc(b);

	if (pb == NULL)
		exit(98);
	return (pb);
}
