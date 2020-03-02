#include <stdio.h>

/**
 *main - print the number of arguments with argv and argc
 *@argc: number of arguments in the argv string
 *@argv: string containing arguments
 *Return: return ok
 */

int main (int argc, char *argv[])
{
	int counter;

	if (argc != 0)
	for (counter = 0; argv[counter] != '\0'; counter++)
	{
	}
	printf("%i\n", counter - 1);
	return (0);
}
