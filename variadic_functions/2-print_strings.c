#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print the strings
 * @separator: the string to be print between num
 * @n: number of integers passed in func
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *result;
	va_list aff;

	va_start(aff, n);

	for (i = 0; i < n; i++)
	{
		result = va_arg(aff, char*);
		if (result == NULL)
		{
			printf("(nil)");
			continue;
		}
		printf("%s", result);
		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(aff);
}
