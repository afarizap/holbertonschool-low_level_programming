#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: 1 to stderr
 */

int main(void)
{
	const char *a;

	a = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, a, strlen(a));
	return (1);
}
