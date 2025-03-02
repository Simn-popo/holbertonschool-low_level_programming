#include "main.h"

/**
 * string_toupper - all case in grand
 * @s: string to put in grand
 *
 * Return: Pointer
 */

char *string_toupper(char *s)
{
	while (*s)
		if (*s >= 'a' && *s <= 's')
			*s -= 32;
		s++;
	return (s);
}
