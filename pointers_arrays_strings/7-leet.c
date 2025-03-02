#include "main.h"

/**
 * leet - turn aeotl into 43071 respectively
 * @s: string to replace from
 *
 * Description: Don't hate the hacker, hate the code :)
 *
 * Return: Pointer to changed string
 */

char *leet(char *s)
{
	char *p = s;
	char let[] = "aAeEoOtTlL";
	char num[] = "4433007711";
	int i;

	while (*p)
	{
		for (i = 0; i < 10; i++)
		{
			if (*p == let[i])
			{
				*p = num[i];
			}
		}
		p++;
	}
	return (s);
}
