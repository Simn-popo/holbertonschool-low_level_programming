#include "main.h"

/**
 * _strlen - return length of the string
 * @s: value
 *
 * Return: (0)
 */

int _strlen(char *s)
{

	int str = 0;

	while (s[str] != '\0')
	str++;
	return (str);
}
