#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;
	printf("Last digit of %d is %i and is")
	if (a > 5)
	{
		printf(" greater than 5\n", n, a);
	} else if (a < 6)
	{
		printf(" less than 6 and not 0\n",
	} else if (a == 0)
	{
		printf(" %i and is 0\n", n, a);
	}
	return (0);
}
