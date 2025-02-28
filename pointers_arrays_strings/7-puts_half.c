#include "main.h"

/**
 * puts_half - print the 2nd half of str
 * @str : string to print
 */

void puts_half(char *str)
{
	int n = 0;

	while (str[n])
		n++;
	n = (n + 1) / 2;
	while (str[n])
		_putchar(str[n++]);
	_putchar('\n');
}
