#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - searche int
 * @array: array
 * @size: value array
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array == NULL || action == NULL)
	return;
	{
		for (a = 0; a < size; a++)
		action(array[a]);
	}
}