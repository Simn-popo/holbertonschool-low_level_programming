#include "main.h"

/**
 * _abs - comptute value
 * @c: value
 *
 * Return: 1 possitive, 0 zero et -1 less zero
 */

int _abs(int c)
{
	if (c < 0)
		c *= -1;
	return (c);
}
