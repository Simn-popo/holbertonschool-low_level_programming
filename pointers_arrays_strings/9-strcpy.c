#include "main.h"

/**
 * *_strcpy - copy a string in new place
 * @dest: destination of copy
 * @scr: source of the string to copy
 *
 * Return: pointeur dest
 */

char *_strcpy(char *dest, char *src)
{
	char *tmp = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (tmp);
}
