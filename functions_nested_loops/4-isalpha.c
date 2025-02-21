#include "main.h"

/**
 * _isalpha - check the alpha caract
 * @c: int
 *
 * Return: (0)
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		if (c <= 'Z' || c >= 'a')
		{
			return (1);
		}
	return (0);
}
