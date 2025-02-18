#include <stdio.h>

/**
 * main - print alpha again but whitout q et e
 * Return: (0) (i get it)
 */

int main(void)
{
	int n;

	for (n = 97; n < 123; n++)
	{
		if (n != 101 && n != 113)
			putchar(n);
	}
	putchar('\n');
	return (0);
}
