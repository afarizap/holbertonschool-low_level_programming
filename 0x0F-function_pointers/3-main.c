#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - check if a number is equal to 98
 * @argc: the integer to check
 * @argv: array of pointers
 * Return: 0 if false, something else otherwise.
 */
int main(int argc, char *argv[])
{
	char *s = NULL;
	int num1 = 0;
	int num2 = 0;
	int res = 0;

	if (argv[2][1])
	{
		printf("Error\n");
		exit(100);
	}
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	s = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	res = get_op_func(s)(num1, num2);
	if (res == 0)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", res);
	return (0);
}
