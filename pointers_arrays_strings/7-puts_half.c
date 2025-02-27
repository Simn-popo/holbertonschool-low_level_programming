#include "main.h"

/**
 * puts_half - print the 2nd half of str
 * @str : string to print
 */

void puts_half(char *str)
{
	int n;

	for (n = 0; n[str] != '\0'; n++)
		;
	n++;
		_putchar(str[n]);
	_putchar('\n');
}
