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
	int c = 0, a, b, x = 0;

	if (argc == 1)
	{
		printf("%i\n", c);
		return (0);
	}
	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] >= '0' && argv[a][b] <= '9')
			{
			}
			else
			{
				puts("Error");
				return (1);
			}
		}
		x = atoi(argv[a]);
		c += x;
	}
	printf("%i\n", c);
	return (0);
}
