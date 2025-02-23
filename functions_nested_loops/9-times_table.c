#include "main.h"

/**
 * times_table - print times table 0 to 9
 *
 * Return: 0
 */

void times_table(void);
{
	int n, m, o;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			o = n * m;
			if (o < 10)
			{
				if (m > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(o + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(o / 10 + '0');
				_putchar(o % 10 + '0');
			}
		}
	_putchar('\n');
	}
}
