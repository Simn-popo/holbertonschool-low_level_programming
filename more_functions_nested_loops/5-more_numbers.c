#include "main.h"

/**
 * more_numbers - print 01234567891011121314 ten time '\n'
 *
 * Return: (0)
 */

void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b <= 10)
			_putchar(b / 10 + '0');
			_putchar(b % 10 + '0');
		}
		putchar('\n');
	}
}
