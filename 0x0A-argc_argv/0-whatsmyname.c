#include <stdio.h>
#include "holberton.h"

/**
 *main - print the name of the executable with argv adn argc
 *@argc: number of arguments in the argv string
 *@argv: string containing arguments
 *Return: return ok
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", argv[0]);
	return (0);
}
