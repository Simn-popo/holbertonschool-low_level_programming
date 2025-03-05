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
	char *start;
	char *end;

	while (*haystack)
	{
		start = haystack;
		end = needle;

		while (*start && *end && *start == *end)
		{
			start++;
			end++;
		}
		if (*end == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
