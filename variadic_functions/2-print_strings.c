#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print the numbers
 * @separator: the string to be print between num
 * @n: number of integers passed in func
 */

 void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i
	int total
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		total = va_arg(args, char*);
		if (total ==NULL)
		total = "(nil)";
		printf("%s", total);

		if (separator && i < n -1)
		printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
