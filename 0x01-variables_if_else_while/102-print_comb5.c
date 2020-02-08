#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = '0'; a <= '9'; a++)
		for (b = '0'; b <= '9'; b++)
			for (c = a; c <= '9'; c++)
				for (d = b; d <= '9'; d++)
				{
					if (!(b == d && a == c))
					{
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(c);
						putchar(d);

						if (!(a == '9' && b == '8'))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
	putchar('\n');
	return (0);
}
