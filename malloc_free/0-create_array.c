#include "main.h"
#include <stdlib.h>
/**
 * *create_array - print array
 * @size: is a taille
 * @c: is a char
 * Return: a array or NULL if 0
 */

char *create_array(unsigned int size, char c)

{
	unsigned int a;

	char *tab = (char *)malloc(size * sizeof(char));

	if (tab == NULL)

	{
		return (NULL);
	}

	for (a = 0; a < size; a++)
	{
		tab[a] = c;
	}

	return (tab);
}
