#include "main.h"
/**
 * _strncpy - copy n chars from src to dest
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of chars to copy
 *
 * Return: pointer to new string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
