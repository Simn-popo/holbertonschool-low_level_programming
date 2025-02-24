#include "main.h"

/**
 * _isdigit - check digit 0 to 9
 * @c: value
 *
 * Return: (1) if digit or (0)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
