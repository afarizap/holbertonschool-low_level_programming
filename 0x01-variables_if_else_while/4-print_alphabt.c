#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int uptoe;
	int uptoq;
	int uptow;

	for (uptoe = 97; uptoe < 101; uptoe++)
	{
		putchar(uptoe);
	}
	for (uptoq = 102; uptoq < 113; uptoq++)
	{
		putchar(uptoq);
	}
	for (uptow = 102; uptow < 123; uptow++)
	{
		putchar(uptow);
	}
	putchar('\n');
	return (0);
}
