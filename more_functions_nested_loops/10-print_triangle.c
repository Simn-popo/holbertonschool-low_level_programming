#include "main.h"

/**
 * print_triangle - print triangle
 * @size: value
 */

void print_triangle(int size)
{
	int u, k;

	for (u = size; u > 0; u--)
	{
		for (k = 1; k <= size; k++)
		{
			if (k < u)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}
