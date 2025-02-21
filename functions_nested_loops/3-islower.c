#include "main.h"

/**
 * int _islower - lower case
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
