#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - selects the corret function
 *
 * @s: operator input
 *
 * Return: pointer to function that connects to correct operator
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

	int i;

	i = 0;

	/**
	 * while operation not n and input not equal input
	 * or not more than 1 character (eg. ++)
	 */
	while (ops[i].op != NULL && (*ops[i].op != *s || s[1] != '\0'))
	{
		i++;
	}

	return (ops[i].f);
}
