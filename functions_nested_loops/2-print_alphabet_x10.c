#include "main.h"

/**
 * print_alphabet_x10 - print 10x
 *
 * Return: (0)
 */

void print_alphabet_x10(void)
{
	int n, m;

	for (n = 0; n < 10; n++)
	{
		for (m = 'a'; m <= 'z'; m++)
			_putchar(m);
		_putchar('\n');
	}
}
