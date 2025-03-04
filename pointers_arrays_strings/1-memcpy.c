#include "main.h"

/**
 * *_memcpy -  function  copies  n bytes from memory
 * @dest: memory area to go
 * @src: original memory
 * @n: array taille
 * Return: pointeur to return
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		dest[j] = src[j];
	return (dest);
}
