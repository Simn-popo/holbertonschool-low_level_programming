#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - Write a function that concatenates two strings
 * @s1: array we want to concatenate
 * @s2: array we want to concatenate
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int len1 = 0;
	int len2 = 0;
	char *copy;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	copy = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!copy)
		return (NULL);
	while (i <= len1)
	{
		copy[i] = s1[i];
		i++;
	}
	while (j <= len2)
	{
		copy[j] = s2[j];
		j++;
	}
	copy[i] = '\0';
	return (copy);
}
