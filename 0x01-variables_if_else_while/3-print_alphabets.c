#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lownumero;
	int uppnumero;

	for (lownumero = 97; lownumero < 123; lownumero++)
	{
		putchar(lownumero);
	}
	for (uppnumero = 65; uppnumero < 91; uppnumero++)
	{
		putchar(uppnumero);
	}
	putchar('\n');
	return (0);
}
