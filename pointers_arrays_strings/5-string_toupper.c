#include "main.h"

/**
 * string_toupper - all case in grand
 * @s: string to put in grand
 *
 * Return: Pointer
 */

char *string_toupper(char *s)
{
	char *ptr = s;

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
		}
		ptr++;
	}
	return (s);
}
