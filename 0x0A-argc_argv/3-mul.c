#include <stdio.h>
#include <stdlib.h>
/**
 *main - multiply two arguments with argv, atoi and argc
 *@argc: number of arguments in the argv string
 *@argv: string containing arguments
 *Return: return ok
 */

int main(int argc, char *argv[])
{
	int c;

	if (argc == 3)
	{
		c = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", c);
	}
	else
		puts("Error");
	return (0);
}
