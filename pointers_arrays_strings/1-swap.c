#include "main.h"

/**
 * swap_int - swap valu of two int
 * @a: value
 * @b: valu deux
 */

void swap_int(int *a, int *b)
{
	int boo = *a;
	*a = *b;
	*b = boo;
}
