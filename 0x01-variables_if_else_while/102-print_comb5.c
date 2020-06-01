#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = '0', aa = '0', b = '0', bb = '0';

	for (; a <= '9'; a++)
		for (aa = '0'; aa <= '9'; aa++)
			for (b = a; b <= '9'; b++)
				for (bb = aa; bb <= '9'; bb++)
				{
					if (a > b)
						continue;
					if (aa == bb && a >= b)
						continue;
					putchar(a);
					putchar(aa);
					putchar(' ');
					putchar(b);
					putchar(bb);
					if (a != '9' || aa != '8')
						putchar(',');
				}
	putchar('\n');
	return (0);
}
