#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searche int
 * @array: array
 * @size: array size
 * @cmp: pointer
 * Return: -1 gros
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL)
	return (-1);
	if (size <= 0)
	return (-1);

	for (a = 0; a < size; a++)
	{
		cmp(array[a]);
		if (cmp(array[a]))
		return (a);
	}
	return (-1);
}
