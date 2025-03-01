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
    int i = 0, j = 0;

    while (dest[i] != '\0')
        i++;

    while (src[j] != '\0') {
        dest[i + j] = src[j];
        j++;
    }

    dest[i + j] = '\0';

    return dest;
}
