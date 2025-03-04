#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - search a string
 * @s: string to find
 * @accept: char to find
 *
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	char *jul;

	while (*s)
	{
		for (jul = accept; *jul; jul++)
		{
			if (*s == *jul)
				return (s);
		}
		s++;
	}
	return (NULL);
}
