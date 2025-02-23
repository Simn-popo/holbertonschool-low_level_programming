#include "main.h"

/**
 * print_last_digit - print last digit of arg
 * @c: int
 *
 * Return: last digit of (n)
 */

int print_last_digit(int c)
{
	int n;

	n = c % 10;

	if (n < 0)
		n *= -1;
	_putchar('0' + n);
	return (n);
}
