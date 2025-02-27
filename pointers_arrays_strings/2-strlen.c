#include "main.h"

/**
 * _strlen - return length of the string
 * @s: value
 *
 * Return: (0)
 */

int _strlen(char *s)
{

	int n;

	while (s[n] != '\0')
	n++;
	return (n);
}
