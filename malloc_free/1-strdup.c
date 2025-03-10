#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - Write a function that returns a pointer
 * to a newly allocated space in memory, which contains
 * a copy of the string given as a parameter.
 * @str: array we want to duplicate
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strdup(char *str)
{
	int lenght = strlen(str);
	char *copy = malloc(lenght + 1);

	if (str == NULL)
	{
		return (NULL);
	}
		if (copy == NULL)
	{
		return (NULL);
	}
	strcpy(copy, str);
	return (copy);
}
