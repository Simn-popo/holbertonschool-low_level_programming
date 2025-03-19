#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that return all the sum of numbers
 * @n: 1st numbers
 * Return: numbers or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int total;
	va_list args;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		total += va_arg(args, int);
	}
	va_end(args);
	return (total);
}
