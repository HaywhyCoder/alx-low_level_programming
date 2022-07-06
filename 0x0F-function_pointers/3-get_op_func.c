#include "3-calc.h"
#include <stdlib.h>

/**
 *get_op_func - select the function to carry out user operation
 *@s: operator passed by user
 *
 *Return: pointer to the function that corresponds to the passed operator
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

	while ((*s != ops[i]->op) && ops[i].op != NULL)
		i++;

	return (ops[i].f);
}
