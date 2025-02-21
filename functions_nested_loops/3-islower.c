#include "main.h"

/**
 * _islower - check if lowercase
 * @c: int
 *
 * Return: (0)
 */

int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);
}
