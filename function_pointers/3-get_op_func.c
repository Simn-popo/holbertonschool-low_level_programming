#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - selc the good function for calculate
 * @s: operateur en arg
 * Return: pointer to a function qui corespond au paramètre des operateurs
 */

int (*get_op_func(char *s))(int, int)
const op_t ops[] = {
{"+", op_add}, {"-", op_sub}, {"*", op_mul},
{"/", op_div}, {"%", op_mod}, {NULL, NULL}
};

while (ops[i].op != NULL)
{
	if (strcmp(ops[i].op, s) == 0)
	{
		return (ops[i].f);
	}
	i++;
}

return (NULL);
