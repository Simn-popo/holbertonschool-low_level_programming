#include "main.h"

/**
 * main - print
 *
 * Return: (0)
 */

void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
}
