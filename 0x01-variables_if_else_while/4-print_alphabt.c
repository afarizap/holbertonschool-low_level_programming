#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b;

	for (b = 97; b < 123; b++)
	{
		if (b != 101 && b != 113)
		{
			b++;
		}
		else
		{
			putchar(b);
		}
	}
	putchar('\n');
	return (0);
}
