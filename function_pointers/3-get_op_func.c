#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Selects the corresponding function to be used.
 * @s: string to select function.
 * Return: Nothing.
 */

int (*get_op_func(char *s))(int, int)
{

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (i < 5 && *(ops[i].op) != *s)
		i++;


	return (ops[i].f);
}
