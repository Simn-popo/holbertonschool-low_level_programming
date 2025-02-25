#include "main.h"

/**
 * print_diagonal - print diagonal
 * @n: value
 */

void print_diagonal(int n)
{	
	int a, i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			for (i = 0; i < a; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
