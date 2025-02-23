#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print from n to 98
 * @n: n beggining
 *
 * Return: 0
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n < 98)
			n++;
		else
			n--;
	}
	printf("98\n");
}
