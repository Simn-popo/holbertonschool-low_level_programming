#include "main.h"

/**
 * puts2 - print the other caracters
 * @str: pointer value to print
 */

void puts2(char *str)
{
	int n;

	for (n = 0; n[str] != '\0'; n++)
		if (n % 2 == 0)
			_putchar(str[n]);
	_putchar('\n');
}
