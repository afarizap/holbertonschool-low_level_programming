#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b, c, d;

	for (b = 0; b < 100; b++)
	{
		c = b / 10;
		d = b % 10;

		putchar(c + '0');
		putchar(d + '0');

		if (b < 99)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
