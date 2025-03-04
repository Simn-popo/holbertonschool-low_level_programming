#include "main.h"
#include <stddef.h>

/**
 * _strchr - locate a character in a string
 * @s: string source
 * @c: character to find
 * Return: character found
 */

char *_strchr(char *s, char c)
{
	while (*s && *s != c)
		s++;
	if (*s == c)
		return ((char *)s);
	return (NULL);
}
