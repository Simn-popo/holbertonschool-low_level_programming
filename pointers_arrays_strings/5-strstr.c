#include "main.h"
#include <stddef.h>

/*
 * _strstr - locates substring
 * @haystack: the string source
 * @needle: string to search
 * Return: to haystack or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	if (!needle)
		return (haystack);
	while (*haystack)
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
