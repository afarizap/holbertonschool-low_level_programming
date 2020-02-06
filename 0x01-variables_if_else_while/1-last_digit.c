#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>
/* and more more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	b = n % 10
	digits = (int)log10(n);
	a = (int)(n / pow(10, digits));
	if (b >= 5)
	{
		printf("Last digit of %d is a and is greater than 5\n", n);
		scanf("%d", &n);
	} else if (b < 6)
	{
		printf("Last digit of %d is a and is less than 6 and not 0\n", n);
		scanf("%d", &n);
	} else if (b == 0)
	{
		printf("Last digit of %d is a and is 0\n", n);
		scanf("%d", &n);
	} else
	{
		printf("Error");
	}
	return (0);
}
