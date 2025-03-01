#include "main.h"

/**
 * _atoi - turn string into a number
 * @s: String
 *
 * Return: value
 */

int _atoi(char *s)
{
	int n, neg;

	neg = 0;
	n = 0;

	while (*s < '0' || *s > '9')
	{
		if (*s == '-')
			neg++;
		if (*s == '\n')
			return (0);
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		if (n < 0)
			n *= 10;
		n -= (int)(*s - '0');
		s++;
	}

	if (neg % 2 == 0)
		n *= -1;
	return (n);
}
