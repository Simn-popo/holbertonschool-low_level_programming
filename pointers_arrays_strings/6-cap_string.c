#include "main.h"

/**
 * cap_string - cap all the world
 * @s: string to capitalize
 *
 * Return: pointer to string
 */

char *cap_string(char *s)
{
	char *temp = s;
	int cap = 1;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z' && cap)
		{
			*s -= 32;
		}
		cap = (*s == ' ' || *s == '\t' || *s == '\n' || *s == ',' || *s == ';' || *s == '.' ||
				*s == '!' || *s == '?' || *s == '"' || *s == '(' || *s == ')' || *s == '{' || *s == '}');
		s++;
	}
	return (temp);
}
