#include "main.h"
#include <stdio.h>
/**
 * print_array - print array of intergres
 * @a: pointeur
 * @n: value
 */

void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", a[i]);
			if (i < n - 1)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
