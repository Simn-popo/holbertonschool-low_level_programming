#include <stdio.h>

/**
 * main - print alpha again but en grand aussi
 *
 * Return: (0) (Success)
 */

int main(void)
{
	int n;

	for (n = 97; n < 123; n++)
		putchar(n);
	for (n = 65; n < 91; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
