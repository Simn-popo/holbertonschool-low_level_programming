#include <stdio.h>
/**
 * main - print alpha in minuscule
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z';)
{
	putchar (ch);
}
	putchar('\n');
	return (0);
}

