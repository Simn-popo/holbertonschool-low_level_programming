#include "main.h"

/**
 * _strspn - Find length of byte matche from s that are in accept
 * @s: String to search
 * @accept: Bytes to match to s
 *
 * Return: Number of bytes that match in a row starting from s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	char *a;

	while (*s)
	{
		for (a = accept; *a; a++)
		{
			if (*a == *s)
				break;
		}
		if (!*a)
			break;
		n++;
		s++;
	}
	return (n);
}
