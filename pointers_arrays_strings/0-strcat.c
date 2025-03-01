#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenate string
 * @dest: destination
 * @src: source
 *
 * Return: pointer destination
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	for (j = 0; src[j] != '\0'; j++)
		dest[i + j] = src[j];
	dest[i + j] = src[j];
	return (dest);
}
