#include "main.h"
#include <stddef.h>

/**
 * _strstr - locate a substring
 * @haystack: string to check
 * @needle: string to find
 * Return: string found or NULL if not
 */

char *_strstr(char *haystack, char *needle)
{
	char *b = haystack;
	char *k = needle;

	while (*b && *k && (*b == *k))
	{
	b++;
	k++;
	}
	if (!*k)
		return (b);
	b++;
	}
	return (NULL);
}
