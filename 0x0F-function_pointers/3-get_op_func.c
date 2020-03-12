#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - prints an integer
 * @s: the integer to print
 *
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

	while (ops[i].op[0] != s[0])
	{
		i++;
		if (ops[i].op == NULL)
		{
			printf("Error\n");
			exit(99);
		}
		if ((ops[i].op == "/" || ops[i].op == "%") && num2 == 0)
		{
			printf("Error\n");
			exit(100);
		}
	}
	return (ops[i].f);
}
