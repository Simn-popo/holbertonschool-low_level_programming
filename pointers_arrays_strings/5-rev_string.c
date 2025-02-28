#include "main.h"

/**
 * rev_string - reverse the off spring
 * @s: string
 */

void rev_string(char *s)
{
	char tmp;
	int n, o;

	for (n = 0; s[n] != '\0'; n++)
		;
	for (o = 0; o < n / 2; o++)
	{
		tmp = s[o];
		s[o] = s[n - 1 - o];
		s[n - 1 - o] = tmp;
	}
}
