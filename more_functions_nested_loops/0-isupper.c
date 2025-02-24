#include "main.h"

/**
 * isupper - check uppercasse
 * @c: value
 *
 * Return: 1 if uppercasse, return (0) otherwise
 */

int _isupper(int c)
{
	if (c <= 'A' && c >= 'Z')
		return (1);
	else
		return (0);
}
