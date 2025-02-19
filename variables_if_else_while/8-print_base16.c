#include <stdio.h>

/**
 * main - print base 16 in petit
 *
 * Return: (0)
 */

int main(void)
{
	int n,l;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}

		for (l = 97; l < 103; l++)
		{
			putchar(l);
		}	
	putchar('\n');
	return (0);
}
