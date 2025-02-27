#include "main.h"

/**
 * print_rev - print in reverse
 * @s: txet
 *
 * Return/ 0
 */

void print_rev(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
		;
	for (n = n - 1; n >= 0; n--)
		_putchar(s[n]);
	_putchar('\n');
}
